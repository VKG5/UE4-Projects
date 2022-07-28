// Fill out your copyright notice in the Description page of Project Settings.


#include "toonTanksPlayerController.h"
#include "GameFramework/Pawn.h"

void AtoonTanksPlayerController::setPlayerEnabledState(bool bPlayerEnabled)
{
	if (bPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
	}

	else
	{
		GetPawn()->DisableInput(this);
	}

	bShowMouseCursor = bPlayerEnabled;
}