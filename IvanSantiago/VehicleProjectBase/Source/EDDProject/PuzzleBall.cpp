// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleBall.h"

// Sets default values
APuzzleBall::APuzzleBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APuzzleBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuzzleBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APuzzleBall::TeleportTheMFSphere()
{
	FTransform* newTransform = new FTransform();
	myStaticMesh->AddWorldTransform(*newTransform);
}

