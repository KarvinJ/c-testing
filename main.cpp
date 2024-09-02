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

void initializeVector(Vector3 *vectorToInitialize);
void initializeVectorFail(Vector3 vectorToInitialize);
void printArray(int *array, int arraySize);

int main()
{

    // Check if windows is define or not and print the code depending of that.
// #ifdef WINDOWS
//     printf("On Windows \n");
// #else
//     printf("Not On Windows \n");
// #endif

// Also we can check if I define value is true or not, most of the time we should prefer this preprocessor checking
#if WINDOWS
    printf("On Windows \n");
#else
    printf("Not On Windows \n");
#endif

    // Vector3 vectorA = {0.0f, 0.0f, 0.0f};
    // Vector3 vectorB = {1.0f, 2.0f, 3.0f};

    // Here I indicate that I'm accesing the add function in the Math namespace.
    // Vector3 result = Math::Vector::Add(vectorA, vectorB);

    // Math::Vector::Print(result);

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

    // pointers

    // now we are allocating memory on the heap, with a pointer we store the memory address
    // every time that we are going to allocate memory (using new) we need to use a pointer
    // a int is 4 bytes typically in a 32 bits machine, so we are allocating 8 bytes in the heap
    // in a 64 bit machine every time we use new int();
    int *pointer = new int();

    // we derenferece operator to add values to the address location of the pointer, with this 4 (hexadecimal value) will be store in the designated memory address
    *pointer = 4;

    int *pointer2 = new int();
    *pointer2 = 10;

    printf("Pointer 1: %d \n", *pointer);
    printf("Pointer 2: %d \n", *pointer2);

    // swapping pointer, we this we change between pointer the memory address that they are pointing
    //  doing this we are also changing the values.
    int *tmpPointer = pointer;
    pointer = pointer2;
    pointer2 = tmpPointer;

    // assing another value
    //  *pointer2 = 1;

    printf("Pointer 1: %d \n", *pointer);
    printf("Pointer 2: %d \n", *pointer2);

    // every time you do a new, you must do a delete, keep in mind that you dont really need to free memory if you are about to end the application
    // because the OS will do the cleaning faster.
    delete pointer;
    delete pointer2;

    int a = 10;

    // if we want to point to the same address in memory of  variable a we need
    //   to do this

    // with &a we are having access to the address of the a variable and we are storing the address in the pointer aPointer
    int *aPointer = &a;

    printf("a variable value: %d \n", a);

    // we a pointer to a variable we can change the variable value, without chaging the variable
    // since aPointer is pointing to the reference of the variable a,
    // we can change the value of the variable a
    *aPointer = 50;

    printf("a variable value: %d \n", a);

    // we *aPointer we have access to the value, but if we use aPointer, we'll have access to the memory address.
    printf("aPointer value: %d \n", *aPointer);
    printf("aPointer address: %p \n", aPointer);

    // doing pointer with vector3

    Vector3 *vectorPointer = new Vector3();

    // to have access to the members of pointer struct or classes there are 2 ways.
    // we only use these methos for struct and classes since there are the only things
    //  in the languages with the capability of having members

    // 1: dereferencing the pointer, but most people avoid this way
    //  (*vectorPointer).x = 10;

    // 2: the second way is the more common, this method is called pointer to member operator
    vectorPointer->x = 10;
    vectorPointer->y = 15;
    vectorPointer->z = 25.4f;

    // And finally we send the vector 3 values to print and check that everything is okay
    Math::Vector::Print(*vectorPointer);

    // finally delete the vector pointer, always remember to delete the pointers to clean up our memory
    delete vectorPointer;

    Vector3 vectorToInitialize;

    // we need to send the reference (memory address) to the function that ask for a pointer
    initializeVector(&vectorToInitialize);

    // sending the copy of the vector
    //  initializeVectorFail(vectorToInitialize);

    printf("initialize vector values: \n");

    Math::Vector::Print(vectorToInitialize);

    // the total value in memory of any struct it depends of their members. In this case vector 3 has 3 float (4 bytes each one)
    //  so every time that I'm doing a new Vector3() I'm allocating 12 bytes in the heap
    Vector3 *vectorA = new Vector3();
    Vector3 *vectorTmp = vectorA;

    delete vectorA;
    // In this case we don't need to delete vectorTmp, because we only allocate memory (use new) for vectorA
    //  and in vectorTmp we are only assigning  that value
    //  delete vectorTmp;

    // Note: everything is a block of memory whether in the stack or the heap

    // to know the size in byte or any dataType
    printf("this datatype has a size of: %d bytes\n", sizeof(Vector3));

    // allocating memory for vector array with this I'm allocating 12*10 (120) bytes in the heap
    Vector3 *vectorArray = new Vector3[10];

    for (int i = 0; i < 10; i++)
    {
        vectorArray[i].x = i;
        // This do the same thing that the upper expression do, people prefer the upper version for obvious reasons.
        (*(vectorArray + i)).y = i + 1;

        vectorArray[i].z = i;
    }

    for (int i = 0; i < 10; i++)
    {
        Math::Vector::Print(vectorArray[i]);
    }

    // to delete the allocated memory of an array we need to do it like this
    delete[] vectorArray;

    // int *array = new int[10];
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = i;
    }

    //as we can se, we can do the same operations with the stack array and the heap allocated array.
    // c++ treats the stack allocated array implicit as a pointer
    printArray(array, 10);

    // passing by reference is almost the same as passing by pointer, but is easier.
    // Passing by reference instead of pointer, give us the advantage that we cannot pass a null pointer to a reference
}

// the arrays are pointers whether I use new for heap allocation or just stack allocation.
// if we are going to use an array in a function we need to indicate the param as a pointer
void printArray(int *array, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("value: %d \n", array[i]);
    }
}

// If we want to initialize the values of a vector 3 without returning, we need to use pointers.
// we define a pointer in the function param, and in the call we send the reference.
// we can simplify this just by asking for the reference in the function (Vector3 &vectorToInitialize)
// but I'm going to leave this as a example.
void initializeVector(Vector3 *vectorToInitialize)
{
    vectorToInitialize->x = 10;
    vectorToInitialize->y = 10;
    vectorToInitialize->z = 10;
}

// if we try to this the initialization will always fail, because we this method receive a copy of this vector,
// so with only change the copy and no the original
void initializeVectorFail(Vector3 vectorToInitialize)
{
    vectorToInitialize.x = 10;
    vectorToInitialize.y = 10;
    vectorToInitialize.z = 10;
}

int intFunctionDeclaration()
{
    return 1;
}