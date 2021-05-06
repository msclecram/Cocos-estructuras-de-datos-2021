// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum PuzzleColor
{
	Red   UMETA(DisplayName = "Red"),
	Blue  UMETA(DisplayName = "Blue"),
	Green UMETA(DisplayName = "Green")

};

class EDDPROJECT_API PuzzleEnums
{
public:
	PuzzleEnums();
	~PuzzleEnums();
};
