// Fill out your copyright notice in the Description page of Project Settings.


#include "toonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"

void AtoonTanksGameMode::actorDied(AActor* deadActor)
{
	// Tank
	if (deadActor == tank)
	{
		tank->handleDestruction();
		// Since we had control over the tank, freeze all the controls
		if (tank->getPlayerController())
		{
			tank->DisableInput(tank->getPlayerController());
			tank->getPlayerController()->bShowMouseCursor = false;
		}
	}

	// Checking if we can cast the present actor to ATower
	// If yes, that means a tower was destroyed
	else if (ATower* destroyedTower = Cast<ATower>(deadActor))
	{
		destroyedTower->handleDestruction();
	}
}

void AtoonTanksGameMode::BeginPlay()
{
	Super::BeginPlay();

	tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}