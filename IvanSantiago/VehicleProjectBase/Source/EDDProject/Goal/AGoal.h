// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../PuzzleEnums.h"
#include "Engine/TextRenderActor.h"
#include "Components/TextRenderComponent.h"
#include "AGoal.generated.h"


UCLASS()
class EDDPROJECT_API AAGoal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAGoal();

	//class AGameLogic* gameLogic;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent,
		 AActor* OtherActor,
		 UPrimitiveComponent* otherComp,
		 FVector NormalImpulse,
		 const FHitResult& Hit);
	
	UFUNCTION(BlueprintCallable)
		void ModifyScoreFromBlueprint(APuzzleBall* ball);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Example")
		TArray< AActor* > ExampleOfArray;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Example")
		TMap< FString, AActor* > ExampleOfMap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Example")
		float ExampleOfFloat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cube")
		class UBoxComponent* mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameLogic")
		TEnumAsByte<PuzzleColor> porterPuzzleColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameLogic")
		class AGameLogic* gameLogic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameLogic")
		int score = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameLogic")
		class ATextRenderActor* txtScore;

};
