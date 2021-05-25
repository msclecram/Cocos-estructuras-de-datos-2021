// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PuzzleBall.h"
#include "GameLogic.generated.h"




UCLASS()
class EDDPROJECT_API AGameLogic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameLogic();
		
	UFUNCTION()
		int ModifyScore(APuzzleBall* ballToAnalyze, PuzzleColor porterColor);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<int> RegisteredBallsIDBlueSide;
	TArray<int> RegisteredBallsIDRedSide;

	bool redPorterRegisteredOrderDiscrepancy = false;
	bool bluePorterRegisteredOrderDiscrepancy = false;

	template <typename T>
	UFUNCTION()
		bool isArraySorted(TArray<T> arrayToAnalyze);

};
