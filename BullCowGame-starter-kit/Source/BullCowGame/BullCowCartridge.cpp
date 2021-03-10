// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    SetupGame();

    // Debug Line
    // PrintLine(TEXT("The Hidden word is: %s"), *HiddenWord);
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{

    if (bGameOver == true)
    {
        // If game is over 
        // clearscreen() and setupgame()
        ClearScreen();
        SetupGame();
    }

    // Else check player guess
    // TODO Count the number of Bulls and Cows

    else
    {
        // Process the Input
        ProcessGame(Input);
    }
}

void UBullCowCartridge::SetupGame()
{
    // Initializations
    // Declaring the hidden word
    HiddenWord = TEXT("ambidextrously");

    // Set the Lives
    Lives = HiddenWord.Len();

    // Set Game Over variable
    bGameOver = false;

    // Welcome the Player
    // Print a line in the terminal
    PrintLine(TEXT("Welcome to Bull Cows! \
                    \nGuess the %i character word \
                    \nYou have %i Lives \
                    \nPress Enter to continue..."), HiddenWord.Len(), Lives); // Prompt the player for input
}

void UBullCowCartridge::EndGame() // When player hits Enter
{
    bGameOver = true;
    PrintLine(TEXT("The word was : %s"), *HiddenWord);
    PrintLine(TEXT("Press Enter to Play Again!"));
}

void UBullCowCartridge::ProcessGame(FString guess)
{
    // To get the length of the hidden word
    int32 len = HiddenWord.Len();

    // Length Condition
    if (guess.Len() == len)
    {
        if (guess == HiddenWord)
        {
            // PrintLine(Input);
            PrintLine("You have won!!!");
            EndGame();
        }

        else
        {
            PrintLine(TEXT("Correct Length but Wrong Word!"));
            LivesLeft();
        }
    }

    // Length fail condition
    else
    {
        PrintLine(TEXT("The Hidden Word is %i characters long!"), len);
        LivesLeft();
    }

    // TODO Play Again or Quit
}

void UBullCowCartridge::LivesLeft()
{
    // Updating the lives
    Lives--;
    PrintLine(TEXT("You have %i lives remaining!"), Lives);

    if (Lives == 0)
    {
        PrintLine(TEXT("**GAME OVER**"), Lives);
        EndGame();
    }
}
