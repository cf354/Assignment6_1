
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Airplane.generated.h"


class USpringArmComponent;
class UCameraComponent;
class USceneComponent;
class UCapsuleComponent;
class UInputMappingContext;
class UBoxComponent;
class ASpartaCharacter;
struct FInputActionValue;


UCLASS()
class ASSIGNMENT6_API AAirplane : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAirplane();

	UPROPERTY();
	ASpartaCharacter* PilotCharacter;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Component")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Airplane|Component")
	UBoxComponent* TriggerBox;



	UFUNCTION()
	void GoForward(const FInputActionValue& value);
	UFUNCTION()
	void StopForward(const FInputActionValue& value);
	UFUNCTION()
	void TurnStart(const FInputActionValue& value);
	UFUNCTION()
	void TurnEnd(const FInputActionValue& value);
	UFUNCTION()
	void ExitAirplane(const FInputActionValue& value);
	UFUNCTION()
	void UpDownStart(const FInputActionValue& value);
	UFUNCTION()
	void UpDownEnd(const FInputActionValue& value);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float MaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float Acceleration;

	float ForwardInput;
	float TurnInput;
	float UpDownInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float CurrentVerticalSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float VerticalSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float TurnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float MaxRollAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float MaxPitchAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float PitchInterpSpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Airplane|Properties")
	float RollInterpSpeed;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Airplane|Properties")
	float CurrentLiftFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float MaxLiftFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|Properties")
	float MinLiftFactor;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Airplane|Properties")
	float DragCoefficient;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Airplane|ProPerties")
	float StallSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Airplane|ProPerties")
	float PitchAccel;

	FVector CurrentSpeed;
	FVector GravityVelocity;
	float CurrentPitch;
	float CurrentRoll;
	float TargetYaw;
	float CurrentYaw;
	float YawInterpSpeed;
	float PitchVelocity;

	bool bIsFlying;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
