// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleEnums.h"
#include "PuzzleBall.generated.h"

UCLASS()
class EDDPROJECT_API APuzzleBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Example")
		int ballID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
		TEnumAsByte<PuzzleColor> puzzleColor;

	UPROPERTY(visibleAnywhere, BlueprintReadWrite, Category = Status)
		class UStaticMeshComponent* myStaticMesh;

	UFUNCTION(BlueprintCallable)
		void TeleportTheMFSphere();
};
