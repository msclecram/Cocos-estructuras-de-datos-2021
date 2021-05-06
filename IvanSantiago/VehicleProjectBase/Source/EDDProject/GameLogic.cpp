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

int AGameLogic::ModifyScore(APuzzleBall* ballToAnalyze)
{
	if (ballToAnalyze->puzzleColor == PuzzleColor::Blue)
	{
		int scoreAddition;
		if (RegisteredBallsIDBlueSide.Contains(ballToAnalyze->ballID))
		{
			scoreAddition = -1;
		}
		else
		{
			RegisteredBallsIDBlueSide.Add(ballToAnalyze->ballID);
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("Entering Score addition")));
			scoreAddition = 1;
		}
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Size is %d"), RegisteredBallsIDBlueSide.Num()));
		
		if (RegisteredBallsIDBlueSide.Num() == 5 && scoreAddition > -1)
		{
			if (isArraySorted(RegisteredBallsIDBlueSide))
			{
				scoreAddition += 10;
			}
		}

		return scoreAddition;
	}
	else
	{
		int scoreAddition;
		if (RegisteredBallsIDRedSide.Contains(ballToAnalyze->ballID))
		{
			return -1;
		}
		else
		{
			RegisteredBallsIDRedSide.Add(ballToAnalyze->ballID);
			scoreAddition = 1;
		}

		if (RegisteredBallsIDRedSide.Num() == 5)
		{
			if (isArraySorted(RegisteredBallsIDRedSide))
			{
				scoreAddition += 10;
			}
		}

		return scoreAddition;
	}
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

