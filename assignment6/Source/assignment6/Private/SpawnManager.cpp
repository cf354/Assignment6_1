// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
	
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	AllNumber = 5;
	distance = 500;
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();
	if (AllNumber > 0) {
		FVector RootLocation = GetActorLocation();
		SpawnLocations.Add(RootLocation);
		for (int i = 1; i < AllNumber; i++) {
			float x = FMath::RandRange(-1*distance, distance);
			float y = FMath::RandRange(-1*distance, distance);
			float z;
			if (distance < 200) {
				z = 200;
			}
			else {
				z = FMath::RandRange(200.f, distance);
			}
			SpawnLocations.Add({ SpawnLocations[i - 1].X + x, SpawnLocations[i - 1].Y + y, SpawnLocations[i - 1].Z + z });
		}

		SpawnAll();
	}
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnManager::SpawnAll()
{
	if (!ItemClass) return;
	
	for (FVector Location: SpawnLocations) {
		AActor* NewItem = GetWorld()->SpawnActor<AActor>(ItemClass, Location, FRotator::ZeroRotator);
	}
}

void ASpawnManager::DestroyItem(AActor* Item)
{
	if (Item) {
		SpawnedItems.Remove(Item);
		Item->Destroy();
	}
}



