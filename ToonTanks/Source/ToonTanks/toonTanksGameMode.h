// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "toonTanksGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AtoonTanksGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void actorDied(AActor* deadActor);

private:
	class ATank* tank;

	class AtoonTanksPlayerController* toonTanksPlayerController;

	float startDelay = 3.f;

	void handleGameStart();

	int32 targetTowerCount = 0;
	int32 getTargetTowerCount();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void startGame();

	UFUNCTION(BlueprintImplementableEvent)
	void gameOver(bool bWonGame);
};
