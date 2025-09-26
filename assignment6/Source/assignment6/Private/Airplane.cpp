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
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AAirplane::AAirplane()
{

	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SetRootComponent(SkeletalMeshComp);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(SkeletalMeshComp);
	SpringArm->TargetArmLength = 300.0f;
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArm);
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	TriggerBox->SetupAttachment(SkeletalMeshComp);
	TriggerBox->SetBoxExtent(FVector(200.f, 200.f, 100.f));

	MaxSpeed = 3000.f;
	Acceleration = 400.f;

	CurrentVerticalSpeed = 0.f;
	VerticalSpeed = 500.f;

	TurnSpeed = 50.f;
	MaxRollAngle = 90.f;
	RollInterpSpeed = 0.5f;

	MaxPitchAngle = 90.f;
	PitchInterpSpeed = 0.01f;

	CurrentLiftFactor = 0.4f;
	MaxLiftFactor = 0.43f;
	MinLiftFactor = 0.4f;
	DragCoefficient = 0.02f;
	StallSpeed = 1000.f;

	PitchVelocity = 0.f;
	PitchAccel = 30.f;


	PrimaryActorTick.bCanEverTick = true;
}

void AAirplane::BeginPlay()
{
	Super::BeginPlay();
	CurrentSpeed = GetVelocity();
}

void AAirplane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(ForwardInput))
	{
		FVector Acceleration3D = GetActorForwardVector() * Acceleration * ForwardInput * DeltaTime;
		CurrentSpeed += Acceleration3D;
	}
	else {
		CurrentSpeed -= CurrentSpeed * DragCoefficient * DeltaTime;
	}
	FVector CurrentDirectVelocity = { CurrentSpeed.X,CurrentSpeed.Y,0.f };
	float Speed = CurrentDirectVelocity.Size();
	if (Speed > MaxSpeed)
	{	
		CurrentSpeed = CurrentSpeed.GetSafeNormal() * MaxSpeed;
	}
	
	FHitResult Hit;
	FVector Start = GetActorLocation();
	FVector End = Start - (0.f, 0.f, 50.f);
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	bIsFlying = !GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Visibility,
		Params
	);

	FVector Gravity;
	if (!bIsFlying)
	{
		CurrentSpeed.Z = 0;
		Gravity = { 0,0,0 };
	}
	else 
	{
		Gravity = { 0,0,-980.f };
	}
	FVector HorizontalSpeed = FVector(CurrentSpeed.X, CurrentSpeed.Y, 0.f);
	float ForwardSpeed = HorizontalSpeed.Size();
	float LiftForce = ForwardSpeed * CurrentLiftFactor;
	FVector Lift = GetActorUpVector() * LiftForce;
	CurrentSpeed += Gravity * DeltaTime + Lift * DeltaTime;
	UE_LOG(LogTemp, Warning, TEXT("Current Speed: %f Lift : %f Location : %s Gravity : %f" ), CurrentSpeed.Z*DeltaTime, Lift.Z*DeltaTime, *GetActorLocation().ToString(), Gravity.Z*DeltaTime);
	
	AddActorWorldOffset(CurrentSpeed * DeltaTime, true);

	if (!FMath::IsNearlyZero(TurnInput))
	{
		FRotator DeltaRot(0.f, TurnInput * TurnSpeed * DeltaTime, 0.f);
		AddActorLocalRotation(DeltaRot, true);

		float TargetRoll = TurnInput * MaxRollAngle;
		CurrentRoll = FMath::FInterpTo(CurrentRoll, TargetRoll, DeltaTime, RollInterpSpeed);
	}
	else
	{
		CurrentRoll = FMath::FInterpTo(CurrentRoll, 0.f, DeltaTime, RollInterpSpeed);
	}

	if (!FMath::IsNearlyZero(UpDownInput))
	{
		PitchVelocity += UpDownInput * PitchAccel * DeltaTime;
	}
	else
	{
		PitchVelocity = FMath::FInterpTo(PitchVelocity, 0.f, DeltaTime, 2.f);
	}

	CurrentPitch += PitchVelocity * DeltaTime;

	FRotator NewRotation = GetActorRotation();
	NewRotation.Pitch += PitchVelocity * DeltaTime;
	NewRotation.Roll = CurrentRoll;
	SetActorRotation(NewRotation);

	FVector LocalUp = GetActorUpVector();

	FVector Forward = GetActorForwardVector();
	
	FVector TargetForward = Forward * HorizontalSpeed.Size();
	FVector NewHorizontal = FMath::VInterpTo(HorizontalSpeed, TargetForward, DeltaTime, 2.f);

	CurrentSpeed = FVector(NewHorizontal.X, NewHorizontal.Y, CurrentSpeed.Z);

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
			if (PlayerController->UpDown)
			{
				EnhancedInput->BindAction(
					PlayerController->UpDown,
					ETriggerEvent::Triggered,
					this,
					&AAirplane::UpDownStart
				);
			}
			if (PlayerController->UpDown)
			{
				EnhancedInput->BindAction(
					PlayerController->UpDown,
					ETriggerEvent::Completed,
					this,
					&AAirplane::UpDownEnd
				);
			}
		}
	}
}

void AAirplane::GoForward(const FInputActionValue& value)
{
	if (!Controller) return;
	ForwardInput = value.Get<float>();
}

void AAirplane::StopForward(const FInputActionValue& value)
{
	if (!Controller) return;
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

void AAirplane::UpDownStart(const FInputActionValue& value)
{
	if (!Controller) return;
	UpDownInput = value.Get<float>();
}

void AAirplane::UpDownEnd(const FInputActionValue& value)
{
	if (!Controller) return;
	UpDownInput = 0.f;
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






