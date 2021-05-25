// Fill out your copyright notice in the Description page of Project Settings.


#include "BallActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABallActor::ABallActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	myStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMeshComponet"));
	myStaticMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ABallActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallActor::MakeTheBallJump(float impulse)
{
	FVector impulseVector(0.0f, 0.0f, impulse);
	myStaticMesh->AddImpulse(impulseVector);
}

