#pragma once

#include <stdio.h>

typedef struct
{
    float x;
    float y;
    float z;
} Vector3;

// using namespace to indicate to my main code the place from where this functions came from. 
// I also need to define this namespace in my cpp file.
namespace Math
{
    //And we can also stack namespaces.
    namespace Vector 
    {
        // We struct and objects we should always prioritize pass by reference,
        //  to avoid copying and with that create new objects and memory, we references & we save memory 
        //With simple datatypes most of the time we can pass by value, we just need to be wary when we are working 
        // with objects (structs and class objects)
        Vector3 Add(Vector3 &vectorA, Vector3 &vectorB);

        void Print(Vector3& result);
    }
}
