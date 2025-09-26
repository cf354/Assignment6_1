// Fill out your copyright notice in the Description page of Project Settings.
#include "SpartaCharacter.h"
#include "SpartaPlayerController.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Airplane.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASpartaCharacter::ASpartaCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	NormalSpeed=600.f;
	SprintSpeedMultiplier=1.7f;
	SprintSpeed=NormalSpeed*SprintSpeedMultiplier;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}



void ASpartaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ASpartaPlayerController* PlayerController = Cast<ASpartaPlayerController>(GetController())) {
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ASpartaCharacter::Move
				);
			}
			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Triggered,
					this,
					&ASpartaCharacter::StartJump
				);
			}
			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Completed,
					this,
					&ASpartaCharacter::StopJump
				);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ASpartaCharacter::Look
				);
			}
			if (PlayerController->SprintAction)
			{
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Triggered,
					this,
					&ASpartaCharacter::StartSprint
				);
			}
			if (PlayerController->SprintAction)
			{
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Completed,
					this,
					&ASpartaCharacter::StopSprint
				);
			}
			if (PlayerController->InteractAction)
			{
				EnhancedInput->BindAction(
					PlayerController->InteractAction,
					ETriggerEvent::Started,
					this,
					&ASpartaCharacter::Interact
				);
			}
		}
	}
}

void ASpartaCharacter::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector2D MoveInput = value.Get<FVector2D>();
	FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);

	// 카메라 기준 Forward / Right
	const FVector ForwardDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		AddMovementInput(ForwardDir, MoveInput.X);
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddMovementInput(RightDir, MoveInput.Y);
	}
}

void ASpartaCharacter::StartJump(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		Jump();
	}
}

void ASpartaCharacter::StopJump(const FInputActionValue& value)
{
	if (value.Get<bool>())
	{
		StopJumping();
	}
}

void ASpartaCharacter::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();
	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
}

void ASpartaCharacter::StartSprint(const FInputActionValue& value)
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}
}

void ASpartaCharacter::StopSprint(const FInputActionValue& value)
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}

void ASpartaCharacter::Interact(const FInputActionValue& value)
{
	if (!Controller)return;
	if (NearbyAirplane)
	{
		UE_LOG(LogTemp, Warning, (TEXT("Airplane On")));
		ASpartaPlayerController* PC = Cast<ASpartaPlayerController>(GetController());
		if (PC)
		{
			UE_LOG(LogTemp, Warning, (TEXT("Interact On Overlap On")));
			PC->CurrentIMC = PC->AirplaneInputMappingContext;
			PC->ApplyInputMapping();
			
			PC->Possess(NearbyAirplane);
			NearbyAirplane->PilotCharacter = this;
			if (GetMesh())
			{
				GetMesh()->SetVisibility(false);
				GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}

		
		}

	}
}

void ASpartaCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	AAirplane* Airplane = Cast<AAirplane>(OtherActor);
	if (Airplane)
	{
		NearbyAirplane = Airplane;
		UE_LOG(LogTemp, Warning, TEXT("NearbyAirplane set!"));
	}
}

void ASpartaCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AAirplane* Airplane = Cast<AAirplane>(OtherActor);
	if (Airplane && NearbyAirplane==Airplane)
	{
		NearbyAirplane = nullptr;
		UE_LOG(LogTemp, Warning, TEXT("NearbyAirplane cleared!"));
	}
}




void ASpartaCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetCapsuleComponent())
	{
		GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ASpartaCharacter::OnOverlapBegin);
		GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &ASpartaCharacter::OnOverlapEnd);
	}
}


