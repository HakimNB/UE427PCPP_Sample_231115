// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "UE427PCPPHud.generated.h"


UCLASS(config = Game)
class AUE427PCPPHud : public AHUD
{
	GENERATED_BODY()

public:
	AUE427PCPPHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
