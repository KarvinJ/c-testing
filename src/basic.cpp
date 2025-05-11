// #include "../include/basic.h" We need to indicate the specific path of our header files, unless we define the path in the cmakefile
#include "basic.h" // Since I have already define the path to my header files I can include just like this.
#include <stdio.h>

void basicOfC()
{
    //To print and round a float to 3 decimals
    printf("this is a float %2.3f\n", 3.1457f);

    // print a float without round  
    printf("this is a float %f\n", 3.1457f);
    printf("this is a number %d\n", 3);
    printf("this is a string %s\n", "hola");  
    printf("this is a character %c\n", 'j');

//read number from the user.
    printf("put a number: ");

    int value;
    scanf("%d", &value);

    printf("your number is %d\n", value);


    printf("put a string: ");

    // here we have an array of characters to save a string.
    char stringBuffer1[100];
    char stringBuffer2[100];

    // since scanf only read string until it find out a whitespace we need to define to buffers to store the hello world.
    scanf("%s %s", &stringBuffer1, &stringBuffer2);

    //since the string buffers are arrays with can print these variable with or without &
    //  and we always going to get the value, instead of the memory direction, like it happens if I put & to int at the time of print
    printf("your string is: %s %s\n", stringBuffer1, stringBuffer2);
}