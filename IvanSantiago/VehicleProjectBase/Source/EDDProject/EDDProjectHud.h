// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "EDDProjectHud.generated.h"


UCLASS(config = Game)
class AEDDProjectHud : public AHUD
{
	GENERATED_BODY()

public:
	AEDDProjectHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
