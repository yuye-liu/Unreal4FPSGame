// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Unreal4FPSGame.h"
#include "Unreal4FPSGameGameMode.h"
#include "Unreal4FPSGameHUD.h"

AUnreal4FPSGameGameMode::AUnreal4FPSGameGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnreal4FPSGameHUD::StaticClass();
}
