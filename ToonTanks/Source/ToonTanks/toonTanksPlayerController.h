// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "toonTanksPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AtoonTanksPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Call in gamemode when the actor dies
	void setPlayerEnabledState(bool bPlayerEnabled);
};
