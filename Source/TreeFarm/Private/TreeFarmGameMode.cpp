// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "TreeFarm.h"
#include "TreeFarmGameMode.h"
#include "TreeFarmHUD.h"
#include "TreeFarmCharacter.h"

ATreeFarmGameMode::ATreeFarmGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATreeFarmHUD::StaticClass();
}
