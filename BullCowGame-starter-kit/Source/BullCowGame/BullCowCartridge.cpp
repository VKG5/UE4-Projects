// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    // Welcome the Player
    // Print a line in the terminal
    PrintLine(TEXT("Welcome to Bull Cows!\nPress Enter to continue..."));

    // Declaring the hidden word
    HiddenWord = TEXT("ambidextrously");

    // TODO Set the Lives

    // TODO Prompt the player for input
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // TODO Evaluate the length of the Input string
    
    // TODO Update the lives/spaces left
        // Check if lives > 0 show lives
            // If yes, Guess Again
            // If No, Show Word and Gameover

            // TODO Count the number of Bulls and Cows

    // Winning Condition
    if (Input == HiddenWord)
    {
        PrintLine(Input);
    }
       
    // Lose condition
    else
    {
        PrintLine(TEXT("You Lost!"));
    }

    // TODO Play Again or Quit
}