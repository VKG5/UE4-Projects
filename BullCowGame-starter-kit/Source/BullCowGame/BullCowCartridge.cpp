// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    // Test Code
    /*FBullCowCount Count;
    PrintLine(TEXT("Bulls : %i, Cows : %i"), Count.Bulls, Count.Cows);*/

    SetupGame();
}

void UBullCowCartridge::OnInput(const FString& PlayerInput) // When the player hits enter
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
        ProcessGame(PlayerInput);
    }
}

void UBullCowCartridge::SetupGame()
{
    // Initializations
    // Hidden word    

    // Setting up the word
    // Either this or the one currently active
    // ValidWords = GetValidWords(Words);
    // Providing the path to the directory
    const FString WordListPath = FPaths::ProjectContentDir() / TEXT("WordLists/HiddenWordList.txt");
    // Loading the words at runtime
    // Predicate (Boolean Function)
    FFileHelper::LoadFileToStringArrayWithPredicate(ValidWords, *WordListPath, [](const FString& Word)
        {
            return Word.Len() >= 4 && Word.Len() <= 8 && IsIsogram(Word);
        });
    
    int32 randomIndex = FMath::RandRange(0, ValidWords.Num() - 1);
    HiddenWord = ValidWords[randomIndex];

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

    // Checking the newly created array
    // Making the array of valid words
    // ValidWords = GetValidWords(Words);
    /*for (int32 i = 0; i < 10; i++)
        PrintLine(TEXT("%s"), *ValidWords[i]);*/

    // Debug Line
    PrintLine(TEXT("The Hidden word is: %s"), *HiddenWord);
}

void UBullCowCartridge::EndGame() // When player hits Enter
{
    bGameOver = true;
    PrintLine(TEXT("The word was : %s"), *HiddenWord);
    PrintLine(TEXT("Press Enter to Play Again!"));
}

void UBullCowCartridge::ProcessGame(const FString& guess)
{
    // To get the length of the hidden word
    int32 len = HiddenWord.Len();

    // Length Condition
    if (guess.Len() == len)
    {
        // Check if the words are same
        if (guess == HiddenWord)
        {
            // PrintLine(Input);
            PrintLine("You have won!!!");
            EndGame();
            return;
        }

        // Check if Isogram
        else if (!IsIsogram(guess))
        {
            PrintLine(TEXT("No repeating letters, guess again!"));
            return;
        }

        else
        {
            PrintLine(TEXT("Correct Length but Wrong Word!"));
            LivesLeft(guess);
        }
    }

    // Length fail condition
    else
    {
        PrintLine(TEXT("The Hidden Word is %i characters long!"), len);
        LivesLeft(guess);
    }

    // TODO Play Again or Quit
}

void UBullCowCartridge::LivesLeft(const FString& guess)
{
    // Updating the lives
    Lives--;

    if (Lives <= 0)
    {
        PrintLine(TEXT("\n**GAME OVER**\n"), Lives);
        EndGame();
    }

    // Show the player Bulls and Cows
    FBullCowCount Score = GetBullCows(guess);

    PrintLine(TEXT("You have %i Bulls and %i Cows!"), Score.Bulls, Score.Cows);

    PrintLine(TEXT("You have %i lives remaining!"), Lives);
}

bool UBullCowCartridge::IsIsogram(const FString& word)
{
    for (int32 index = 0; index < word.Len(); index++)
    {
        // Checking the every character to find duplicates
        for (int32 inner = index + 1; inner < word.Len(); inner++)
        {
            if (word[index] == word[inner])
            {
                return false;
            }
        }
    }

    return true;
}

TArray<FString> UBullCowCartridge::GetValidWords(const TArray<FString>& WordList) const
{
    TArray<FString> ValidWordsTemp;

    // Adding the words to the new valid words array
    // PrintLine(TEXT("The number of words possible is: %i"), Words.Num());

    for (FString element : WordList)
    {
        if (element.Len() >= 4 && element.Len() <= 8)
        {
            // Checking for isograms
            if (IsIsogram(element))
            {   
                // PrintLine(TEXT("%s"), *Words[i]);
                ValidWordsTemp.Emplace(element);
            }
        }
    }

    return ValidWordsTemp;
}

FBullCowCount UBullCowCartridge::GetBullCows(const FString& Guess) const
{
    FBullCowCount Count;

    // If the index Guess is same as index Hidden, BullCount++
    // If not a bull was it a cow? if yes CowCount++
    for (int32 i = 0; i < Guess.Len(); i++)
    {
        if (Guess[i] == HiddenWord[i])
        {
            Count.Bulls++;
            continue;
        }

        for (int32 j = 0; j < HiddenWord.Len(); j++)
        {
            if (Guess[i] == HiddenWord[j])
            {
                Count.Cows++;
                break;
            }
        }
    }

    return Count;
}
