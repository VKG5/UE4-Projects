// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

	public:
		virtual void BeginPlay() override;
		virtual void OnInput(const FString& Input) override;
		void SetupGame();
		void EndGame();
		void ProcessGame(FString guess);
		void LivesLeft();

	// Your declarations go below!
	private:
		// Declaring the HiddenWord
		FString HiddenWord;

		// Declaring the Lives
		int32 Lives;

		// Declaring the Game Over 
		bool bGameOver;
};
