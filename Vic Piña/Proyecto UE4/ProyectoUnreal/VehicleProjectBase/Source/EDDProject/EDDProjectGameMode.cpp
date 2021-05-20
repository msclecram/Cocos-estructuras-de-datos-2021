// Copyright Epic Games, Inc. All Rights Reserved.

#include "EDDProjectGameMode.h"
#include "EDDProjectPawn.h"
#include "EDDProjectHud.h"

AEDDProjectGameMode::AEDDProjectGameMode()
{
	DefaultPawnClass = AEDDProjectPawn::StaticClass();
	HUDClass = AEDDProjectHud::StaticClass();
}
