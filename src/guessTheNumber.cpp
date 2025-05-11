#include "guessTheNumber.h"

//make a guess the game between 0 and 99
void guessTheNumber(int numberToGuessed) 
{
    bool userGuessTheNumber;

    while (!userGuessTheNumber)
    {
        printf("Guess the number: ");

        int value;
        scanf("%d", &value);

        if (value == numberToGuessed) {

            printf("You guessed the number\n");
            userGuessTheNumber = true;
        }
        
        else if (value > numberToGuessed) 
            printf("Your number is bigger \n");
        
        else 
            printf("Your number is lower \n");
    }
}