// Fill out your copyright notice in the Description page of Project Settings.


#include "SpartaPlayerController.h"
#include "EnhancedInputSubsystems.h"



ASpartaPlayerController::ASpartaPlayerController() :
	CharacterInputMappingContext(nullptr),
	MoveAction(nullptr),
	JumpAction(nullptr),
	LookAction(nullptr),
	SprintAction(nullptr),
	AirplaneInputMappingContext(nullptr),
	GoForward(nullptr),
	Turn(nullptr),
	InteractAction(nullptr)
{
}


void ASpartaPlayerController::BeginPlay()
{
	Super::BeginPlay();

	CurrentIMC = CharacterInputMappingContext;
	ApplyInputMapping();
}

void ASpartaPlayerController::ApplyInputMapping()
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			Subsystem->ClearAllMappings();
			if (CurrentIMC)
			{
				Subsystem->AddMappingContext(CurrentIMC, 1); // 레벨 1로 적용
			}
		}
	}
}
