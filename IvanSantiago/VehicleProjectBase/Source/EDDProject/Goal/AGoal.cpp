// Fill out your copyright notice in the Description page of Project Settings.


#include "AGoal.h"
#include "Components/BoxComponent.h"
#include "../PuzzleBall.h"
#include "../GameLogic.h"


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
	const FHitResult& SweepResult)
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Olverlapping with %s"), *OtherActor->GetName()));
	
	APuzzleBall* ball = Cast<APuzzleBall>(OtherActor);

	//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Statement is %d"), (ball != nullptr && porterPuzzleColor == ball->puzzleColor)));

	/*if (ball != nullptr && porterPuzzleColor == ball->puzzleColor)
	{
		ModifyScoreFromBlueprint(ball);
	}*/

	

	
}


void AAGoal::ModifyScoreFromBlueprint(APuzzleBall* ball)
{
	score += this->gameLogic->ModifyScore(ball, this->porterPuzzleColor);

	if (txtScore != nullptr)
	{
		UTextRenderComponent* TextRenderComponent = txtScore->GetTextRender();
		TextRenderComponent->SetText("Score: " + FString::FromInt(score));
	}
}

void AAGoal::OnHit
(UPrimitiveComponent* HitComponent,
	AActor* OtherActor,
	UPrimitiveComponent* otherComp,
	FVector NormalImpulse,
	const FHitResult& Hit)
{

}

