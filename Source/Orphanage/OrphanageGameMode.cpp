// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OrphanageGameMode.h"
#include "OrphanageHUD.h"
#include "OrphanageCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOrphanageGameMode::AOrphanageGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOrphanageHUD::StaticClass();
}
