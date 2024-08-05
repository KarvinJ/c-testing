#include <stdio.h>
// importing theses libraries to use rand
#include <stdlib.h>
#include <time.h>
// If there is a file that you create you use "" in the include instead of <>
#include "math.h"
// Since I can use both ways
//  #include <math.h>
#include "guessTheNumber.h"
#include "basic.h"
#include "Vector3.h"

// Linking phase: Linking refers to the creation of a single executable file from multiple object files.
// In this step, it is common that the linker will complain about undefined functions (commonly, main itself).
// During compilation, if the compiler could not find the definition for a particular function, it would just assume that the function was defined in another file.
//  If this isn't the case, there's no way the compiler would know -- it doesn't look at the contents of more than one file at a time.
// The linker, on the other hand, may look at multiple files and try to find references for the functions that weren't mentioned.

// function declaration: If a declare a function when the program is compiling when it comes to this line of code it will check in the whole file
//   during the linking phase if there is a definition for this declaration it could check multiple files toooooo
int intFunctionDeclaration();

// Preprocessor directives
// #define example. define is normally declare in uppercase to differentiate between variables
// This works great for constanst variable, but I should most of the time use const instead of define.
// Because with use define with don't have any type.
#define PI 3.1457f

#define WINDOWS 1

// If we want to undefine a previous define value.
// #undef WINDOWS

int main()
{

    // Check if windows is define or not and print the code depending of that. 
// #ifdef WINDOWS
//     printf("On Windows \n");
// #else
//     printf("Not On Windows \n");
// #endif

//Also we can check if I define value is true or not, most of the time we should prefer this preprocessor checking
#if WINDOWS
    printf("On Windows \n");
#else
    printf("Not On Windows \n");
#endif


    Vector3 vectorA = {0.0f, 0.0f, 0.0f};
    Vector3 vectorB = {1.0f, 2.0f, 3.0f};

//Here I indicate that I'm accesing the add function in the Math namespace.
    Vector3 result = Math::Vector::Add(vectorA, vectorB);

    Math::Vector::Print(result);

    // basicOfC();

    // printf("declaration function %d\n", intFunctionDeclaration());
    // printf("header function %d\n", add(5, 4));
    // printf("PI: %2.4f \n", PI);

    // int score = 19;
    // int test = score / 10;

    // printf("modulo %d\n", test);

    // this only work for raw string, if I want it to use variables this concatenation won't work.
    // const char *stringConcatenation = "My "
    //                                   "Name "
    //                                   "is "
    //                                   "Kevin\n";

    // printf("%s", stringConcatenation);

    // get a number between 0 and 99
    // srand(time(NULL));
    // int numberToGuessed = rand() % 100;

    // Reimplementation of my guess the number game with headers
    //  guessTheNumber(numberToGuessed);

    // in c++ there is no need to add the return 0
}

int intFunctionDeclaration()
{
    return 1;
}