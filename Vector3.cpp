#include "Vector3.h"

namespace Math
{
    namespace Vector
    {
        Vector3 Add(Vector3 vectorA, Vector3 vectorB)
        {
            // In oop if we want to create a new object will normally use new, but here works different from java
            // the new operator allocate memory on the heap which is unmmanaged memory,
            // this probably become later a memory leak, because we can't forget about freeing.
            // Vector3 *result = new Vector3();

            // This is how we manage the creation of objects if we don't want to allocate memory.
            // Even though this is a structure the creation of this is called object, this is because in C++ classes and structs are the same,
            Vector3 result = {vectorA.x + vectorB.x, vectorA.y + vectorB.y, vectorA.z + vectorB.z};

            return result;
        }

        void Print(Vector3 result)
        {
            printf("X: %2.3f, Y: %2.3f, Z: %2.3f \n", result.x, result.y, result.z);
        }
    }
}
