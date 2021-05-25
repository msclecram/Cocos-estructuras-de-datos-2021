// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball_Base.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABall_Base::ABall_Base()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    myStaticMesh = CreateDefaultSubobject < UStaticMeshComponent >(TEXT("MyMeshComponent"));

    myStaticMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABall_Base::BeginPlay()
{
    Super::BeginPlay();



}

// Called every frame
void ABall_Base::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ABall_Base::MakeTheBallJump(float impulse)
{
    FVector impulseVector(0.0f, 0.0f, impulse);
    myStaticMesh->AddImpulse(impulseVector);
}

void ABall_Base::ReturnToCenter(FVector position)
{
    FVector SetActorLocation(0.0f, 0.0f, 0.0f); 

}