// Copyright Epic Games, Inc. All Rights Reserved.

#include "Learning_Project_1GameMode.h"
#include "Learning_Project_1HUD.h"
#include "Learning_Project_1Character.h"
#include "UObject/ConstructorHelpers.h"

ALearning_Project_1GameMode::ALearning_Project_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALearning_Project_1HUD::StaticClass();
}
