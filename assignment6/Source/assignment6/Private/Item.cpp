// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);
	BreakDelay = 10.0f;
	PrimaryActorTick.bCanEverTick = true;
	RotationSpeed = 90.0f;
}



void AItem::BeginPlay()
{
	Super::BeginPlay();

	if (BreakDelay > 0) {
		GetWorld()->GetTimerManager().SetTimer(
			TimerHandle,
			this,
			&AItem::DestroySelf,
			10.0f,
			false
		);
	}
}
void AItem::DestroySelf() {
	Destroy();
}

void AItem::Tick(float DeltaTime)
{
	// 1초/frame = deltatime
	Super::Tick(DeltaTime);
	//Tick 함수는 방어 코드있어야됨
	if (!FMath::IsNearlyZero(RotationSpeed)) 
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}
}

void AItem::ResetActorPosition()
{
	SetActorLocation(FVector::ZeroVector);
}






