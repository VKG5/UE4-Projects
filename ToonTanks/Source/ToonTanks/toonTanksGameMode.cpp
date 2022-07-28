// Fill out your copyright notice in the Description page of Project Settings.


#include "toonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"
#include "toonTanksPlayerController.h"

void AtoonTanksGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Handling Game Start
	handleGameStart();
}

void AtoonTanksGameMode::actorDied(AActor* deadActor)
{
	// Tank
	if (deadActor == tank)
	{
		tank->handleDestruction();
		// Since we had control over the tank, freeze all the controls
		if (toonTanksPlayerController)
		{
			toonTanksPlayerController->setPlayerEnabledState(false);
		}

		// False - Meaning we won, Game Won
		gameOver(false);
	}

	// Checking if we can cast the present actor to ATower
	// If yes, that means a tower was destroyed
	else if (ATower* destroyedTower = Cast<ATower>(deadActor))
	{
		destroyedTower->handleDestruction();
		targetTowerCount -= 1;

		if (targetTowerCount == 0)
		{
			// True - Meaning we lost, Game Over
			gameOver(true);
		}
	}
}

void AtoonTanksGameMode::handleGameStart()
{
	targetTowerCount = getTargetTowerCount();

	tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	toonTanksPlayerController = Cast<AtoonTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	startGame();

	if (toonTanksPlayerController)
	{
		// Disabling Input for time period
		toonTanksPlayerController->setPlayerEnabledState(false);

		FTimerHandle playerEnableTimerHandle;
		
		// Setting up a delegate
		FTimerDelegate playerEnableTimerDelegate = FTimerDelegate::CreateUObject(
			toonTanksPlayerController, 
			&AtoonTanksPlayerController::setPlayerEnabledState,
			true
		);

		// Calling set timer using delegate
		GetWorldTimerManager().SetTimer(
			playerEnableTimerHandle,
			playerEnableTimerDelegate,
			startDelay,
			false
		);
	}
}

int32 AtoonTanksGameMode::getTargetTowerCount()
{
	TArray <AActor*> towerActorsList;

	UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), towerActorsList);
	
	// Returning number of actors in the particular class
	return towerActorsList.Num();
}