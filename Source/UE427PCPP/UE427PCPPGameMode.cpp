// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE427PCPPGameMode.h"
#include "UE427PCPPPawn.h"
#include "UE427PCPPHud.h"

AUE427PCPPGameMode::AUE427PCPPGameMode()
{
	DefaultPawnClass = AUE427PCPPPawn::StaticClass();
	HUDClass = AUE427PCPPHud::StaticClass();
}
