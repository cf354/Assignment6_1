// Fill out your copyright notice in the Description page of Project Settings.


#include "Airplane.h"
#include "EnhancedInputComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "SpartaPlayerController.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "SpartaCharacter.h"


// Sets default values
AAirplane::AAirplane()
{
	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComp);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(StaticMeshComp);
	SpringArm->TargetArmLength = 300.0f;
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArm);
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	TriggerBox->SetupAttachment(StaticMeshComp);
	TriggerBox->SetBoxExtent(FVector(200.f, 200.f, 100.f));

	CurrentSpeed = 0.f;
	MaxSpeed = 2000.f;
	Acceleration = 300.f;

	CurrentVerticalSpeed = 0.f;
	VerticalSpeed = 500.f;

	TurnSpeed = 50.f;
	MaxRollAngle = 90.f;
	RollInterpSpeed = 0.5f;

	MaxPitchAngle = 90.f;
	PitchInterpSpeed = 0.1f;

	LiftFactor = 0.5f;
	DragCoefficient = 0.02f;
	StallSpeed = 1000.f;

	PrimaryActorTick.bCanEverTick = true;

}

void AAirplane::BeginPlay()
{
	Super::BeginPlay();

}

void AAirplane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	CurrentSpeed += ForwardInput * Acceleration * DeltaTime;
	CurrentSpeed -= DragCoefficient * CurrentSpeed * DeltaTime;
	CurrentSpeed = FMath::Clamp(CurrentSpeed, 0.f, MaxSpeed);
	AddActorWorldOffset(GetActorForwardVector() * CurrentSpeed * DeltaTime, true);

	float Lift = CurrentSpeed * LiftFactor;
	FVector BaseGravity = FVector(0, 0, -980.f) * DeltaTime;
	float GravityFactor = FMath::Clamp(-CurrentPitch / MaxPitchAngle, 0.f, 1.f);
	FVector GravityForce = BaseGravity * (1.f + GravityFactor);
	AddActorWorldOffset(GetActorUpVector() * Lift * DeltaTime+GravityForce, true);

	FHitResult Hit;
	FVector Start = GetActorLocation();
	FVector End = Start - FVector(0, 0, 1000.f);

	bIsFlying = !(GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility));

	
	float StallFactor = 0;

	if (bIsFlying&&CurrentSpeed < StallSpeed)
	{
		StallFactor = FMath::Clamp(1 - (CurrentSpeed / StallSpeed), 0.f, 1);
	}
	else {
		StallFactor = 0;
	}

	if (!FMath::IsNearlyZero(TurnInput))
	{
		FRotator DeltaRot(0.f, TurnInput * TurnSpeed * DeltaTime, 0.f);
		AddActorLocalRotation(DeltaRot,true);

		float TargetRoll = TurnInput * MaxRollAngle;
		CurrentRoll = FMath::FInterpTo(CurrentRoll, TargetRoll, DeltaTime, RollInterpSpeed);		
	}
	else 
	{
		CurrentRoll = FMath::FInterpTo(CurrentRoll, 0.f, DeltaTime, RollInterpSpeed);
	}
	
	if (!FMath::IsNearlyZero(ForwardInput)) {		
		float TargetPitch = (ForwardInput * MaxPitchAngle)-(MaxPitchAngle*StallFactor)+0.1*-MaxPitchAngle;
		CurrentPitch = FMath::FInterpTo(CurrentPitch, TargetPitch, DeltaTime, PitchInterpSpeed);		
	}
	else
	{
		float GravityPitch = 0.1f;
		float TargetPitch = (ForwardInput * MaxPitchAngle) - (MaxPitchAngle*StallFactor) + GravityPitch * -MaxPitchAngle;
		CurrentPitch = FMath::FInterpTo(CurrentPitch, TargetPitch, DeltaTime, PitchInterpSpeed);
	}
	FRotator NewRotation(CurrentPitch, GetActorRotation().Yaw, CurrentRoll);

	SetActorRotation(NewRotation);
}

void AAirplane::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ASpartaPlayerController* PlayerController = Cast<ASpartaPlayerController>(GetController())) {
			if (PlayerController->GoForward)
			{
				EnhancedInput->BindAction(
					PlayerController->GoForward,
					ETriggerEvent::Triggered,
					this,
					&AAirplane::GoForward
				);
			}
			if (PlayerController->GoForward)
			{
				EnhancedInput->BindAction(
					PlayerController->GoForward,
					ETriggerEvent::Completed,
					this,
					&AAirplane::StopForward
				);
			}
			
			if (PlayerController->Turn)
			{
				EnhancedInput->BindAction(
					PlayerController->Turn,
					ETriggerEvent::Triggered,
					this,
					&AAirplane::TurnStart
				);
			}
			if (PlayerController->Turn)
			{
				EnhancedInput->BindAction(
					PlayerController->Turn,
					ETriggerEvent::Completed,
					this,
					&AAirplane::TurnEnd
				);
			}
			if (PlayerController->InteractAction)
			{
				EnhancedInput->BindAction(
					PlayerController->InteractAction,
					ETriggerEvent::Started,
					this,
					&AAirplane::ExitAirplane
				);
			}
		}
	}

}


void AAirplane::GoForward(const FInputActionValue& value)
{
	if (!Controller)return;

	ForwardInput = value.Get<float>();


}

void AAirplane::StopForward(const FInputActionValue& value)
{
	if (!Controller)return;
	ForwardInput = 0.f;
}

void AAirplane::ExitAirplane(const FInputActionValue& value)
{
	if (!Controller) return;
	if (!bIsFlying) {
		ASpartaPlayerController* PC = Cast<ASpartaPlayerController>(GetController());
		if (PC && PilotCharacter)
		{

			PC->CurrentIMC = PC->CharacterInputMappingContext;
			PC->ApplyInputMapping();

			FVector SpawnLocation = GetActorLocation() + GetActorRightVector() * 200.f;
			PilotCharacter->SetActorLocation(SpawnLocation);

			if (PilotCharacter->GetMesh())
			{
				PilotCharacter->GetMesh()->SetVisibility(true);
				PilotCharacter->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
			PilotCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			PC->Possess(PilotCharacter);

			PilotCharacter = nullptr;
		}
	}
}



void AAirplane::TurnStart(const FInputActionValue& value)
{
	if (!Controller)return;
	TurnInput = value.Get<float>();
}

void AAirplane::TurnEnd(const FInputActionValue& value)
{
	if (!Controller)return;
	TurnInput = 0.f;
}






