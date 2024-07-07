#include <stdio.h>
// importing theses libraries to use rand
#include <stdlib.h>
#include <time.h>
//If there is a file that you create you use "" in the include instead of <>
#include "math.h"
//Since I can use both ways
// #include <math.h>
#include "guessTheNumber.h"
#include "basic.h"

// Linking phase: Linking refers to the creation of a single executable file from multiple object files.
// In this step, it is common that the linker will complain about undefined functions (commonly, main itself).
// During compilation, if the compiler could not find the definition for a particular function, it would just assume that the function was defined in another file.
//  If this isn't the case, there's no way the compiler would know -- it doesn't look at the contents of more than one file at a time. 
// The linker, on the other hand, may look at multiple files and try to find references for the functions that weren't mentioned.

//function declaration: If a declare a function when the program is compiling when it comes to this line of code it will check in the whole file
//  during the linking phase if there is a definition for this declaration it could check multiple files toooooo
int intFunctionDeclaration();

int main() {

    basicOfC();

    printf("declaration function %d\n", intFunctionDeclaration());
    printf("header function %d\n", add(5, 4));

    //get a number between 0 and 99
    srand(time(NULL));
    int numberToGuessed = rand() % 100;

//Reimplement my guess the number game with headers 
    guessTheNumber(numberToGuessed);
    
    // in c++ there is no need to add the return 0
}

int intFunctionDeclaration() 
{
    return 1;
}