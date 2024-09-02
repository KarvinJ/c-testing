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
        Vector3 Add(Vector3 &vectorA, Vector3 &vectorB);

        void Print(Vector3& result);
    }
}
