// Fill out your copyright notice in the Description page of Project Settings.


#include "Elevator.h"


AElevator::AElevator()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);
	MaxHeight = 2000;
	bGoingUp = true;
	
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElevator::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("GetActorLocation : %s"), *GetActorLocation().ToString());
	CurLocation = StartLocation;		
	
}

// Called every frame
void AElevator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

	CurLocation = GetActorLocation();
	CurLocation += MoveSpeed * DeltaTime * (bGoingUp ? 1 : -1);
	SetActorLocation(CurLocation);

	if (CurLocation.Z>= StartLocation.Z + MaxHeight)
	{
		bGoingUp = false;
	}
	else if (CurLocation.Z<= StartLocation.Z)
	{
		bGoingUp = true;
	}
	
	
}

