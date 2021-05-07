// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLogic.h"

// Sets default values
AGameLogic::AGameLogic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameLogic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 


}

int AGameLogic::ModifyScore(APuzzleBall* ballToAnalyze, PuzzleColor porterColor)
{
	int scoreAddition = 0;
	bool* discrepancyBool;
	TArray<int>* arrayToAnalyze;

	if (ballToAnalyze->puzzleColor == porterColor)
	{
		scoreAddition++;
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Reaching matching color Score Addition part ")));
	}

	
	
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Reaching pointer assignation part ")));
	//set reference to array correspondent to color
	if (ballToAnalyze->puzzleColor == PuzzleColor::Blue)
	{
		arrayToAnalyze = &RegisteredBallsIDBlueSide;
		discrepancyBool = &bluePorterRegisteredOrderDiscrepancy;
		
	}
	else
	{
		arrayToAnalyze = &RegisteredBallsIDRedSide;
		discrepancyBool = &redPorterRegisteredOrderDiscrepancy;
	}

	//if ball id is already registered, ser negative score
	if (arrayToAnalyze->Contains(ballToAnalyze->ballID))
	{
		scoreAddition = -1;
	}
	else //if ball was not previously scored
	{
		/*if ball corresponds to the expected id (if Num() = 0, we expect ballID=1, if Num() = 1, we expect ballID=2...) AND the order wasn't broke before,
		  add a bonus for keeping order PLUS the scoring point*/  
		
		if (ballToAnalyze->ballID == arrayToAnalyze->Num() + 1 && !*discrepancyBool)
		{
			scoreAddition += 2;
			arrayToAnalyze->Add(ballToAnalyze->ballID);
		}
		else //either the ball does not match expected ID or there was a previous discrepancy registered
		{
			scoreAddition++; //I couldn't bring myself to put +=1
			
			//register discrepancy if needed
			if (ballToAnalyze->ballID != arrayToAnalyze->Num() + 1)
			{
				*discrepancyBool = true;
			}
		}
	}

	return scoreAddition;
}

template <typename T>
bool AGameLogic::isArraySorted(TArray<T> arrayToAnalyze)
{
	for (int i = 0; i < arrayToAnalyze.Num() - 1; i++)
	{
		if (arrayToAnalyze[i] > arrayToAnalyze[i + 1])
			return false;
	}

	return true;
}

