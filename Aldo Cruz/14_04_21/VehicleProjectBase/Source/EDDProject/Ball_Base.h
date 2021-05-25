// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball_Base.generated.h"

UCLASS()
class EDDPROJECT_API ABall_Base : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ABall_Base();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class UStaticMeshComponent* myStaticMesh;

    UFUNCTION(BlueprintCallable)
        void MakeTheBallJump(float impulse);

    UFUNCTION(BlueprintCallable)
        void ReturnToCenter(FVector position); 

};