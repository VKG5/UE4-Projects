// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

	public:
		virtual void BeginPlay() override;
		virtual void OnInput(const FString&) override;
		void SetupGame();
		void EndGame();
		void ProcessGame(const FString&);
		void LivesLeft(const FString&);
		static bool IsIsogram(const FString&);
		TArray<FString> GetValidWords(const TArray<FString>&) const;
		FBullCowCount GetBullCows(const FString&) const; 

	// Your declarations go below!
	private:
		// Declaring the HiddenWord
		FString HiddenWord;

		// Array of the words to be loaded into the memory & the array of valid words
		TArray<FString> Words;
		TArray<FString> ValidWords;

		// Declaring the Lives
		int32 Lives;

		// Declaring the Game Over 
		bool bGameOver;
};
