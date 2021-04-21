// Fill out your copyright notice in the Description page of Project Settings.


#include "AGoal.h"
#include "Components/BoxComponent.h"

// Sets default values
AAGoal::AAGoal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));	
	mesh->SetupAttachment(RootComponent);
	mesh->OnComponentBeginOverlap.AddDynamic(this, &AAGoal::BeginOverlap);
}

// Called when the game starts or when spawned
void AAGoal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAGoal::BeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult) {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Olverlapping with %s"), *OtherActor->GetName()));
}