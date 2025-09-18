// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnManager.generated.h"

UCLASS()
class ASSIGNMENT6_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Components")
	USceneComponent* SceneRoot;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spawn")
	TSubclassOf<AActor> ItemClass;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spawn")
	int AllNumber;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Spawn")
	TArray<FVector> SpawnLocations;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spawn")
	float distance;

	UPROPERTY()
	TArray<AActor*> SpawnedItems;

	UFUNCTION()
	void SpawnAll();

	UFUNCTION()
	void DestroyItem(AActor *Item);
	
};
