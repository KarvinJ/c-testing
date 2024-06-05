#include <stdio.h>
// importing theses libraries to use rand
#include <stdlib.h>
#include <time.h>

int main() {

    //To print and round a float to 3 decimals
    // printf("this is a float %2.3f\n", 3.1457f);

    // print a float without round  
    // printf("this is a float %f\n", 3.1457f);
    // printf("this is a number %d\n", 3);
    // printf("this is a string %s\n", "hola");  
    // printf("this is a character %c\n", 'j');

//read number from the user.
    // printf("put a number: ");

    // int value;
    // scanf("%d", &value);

    // printf("your number is %d\n", value);


    // printf("put a string: ");

    // here we have an array of characters to save a string.
    // char stringBuffer1[100];
    // char stringBuffer2[100];

    // since scanf only read string until it find out a whitespace we need to define to buffers to store the hello world.
    // scanf("%s %s", &stringBuffer1, &stringBuffer2);

    //since the string buffers are arrays with can print these variable with or without &
    //  and we always going to get the value, instead of the memory direction, like it happens if I put & to int at the time of print
    // printf("your string is: %s %s\n", stringBuffer1, stringBuffer2);


    //get a number between 0 and 99
    

    //make a guess the game between 0 and 99
    srand(time(NULL));
    int numberToGuessed = rand() % 100;

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