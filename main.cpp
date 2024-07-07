#include <stdio.h>
// importing theses libraries to use rand
#include <stdlib.h>
#include <time.h>
//If there is a file that you create you use "" in the include instead of <>
#include "math.h"
//Since I can use both ways
// #include <math.h>

#include "guessTheNumber.h"


// Linking phase: Linking refers to the creation of a single executable file from multiple object files.
// In this step, it is common that the linker will complain about undefined functions (commonly, main itself).
// During compilation, if the compiler could not find the definition for a particular function, it would just assume that the function was defined in another file.
//  If this isn't the case, there's no way the compiler would know -- it doesn't look at the contents of more than one file at a time. 
// The linker, on the other hand, may look at multiple files and try to find references for the functions that weren't mentioned.


//function declaration: If a declare a function when the program is compiling when it comes to this line of code it will check in the whole file
//  during the linking phase if there is a definition for this declaration it could check multiple files toooooo
// int intFunctionDeclaration();

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


    // printf("declaration function %d\n", intFunctionDeclaration());
    printf("header function %d\n", add(5, 4));


    //get a number between 0 and 99
    
    //make a guess the game between 0 and 99
    srand(time(NULL));
    int numberToGuessed = rand() % 100;

//Reimplement my guess the number game with headers 
    guessTheNumber(numberToGuessed);
    
    // in c++ there is no need to add the return 0
}

// int intFunctionDeclaration() 
// {
//     return 1;
// }