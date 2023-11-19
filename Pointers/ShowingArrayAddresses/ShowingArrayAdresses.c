// @AsherLucRen
// Create a float array with 10 elements and then show each address alocated (5th list, exercise 2)

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10

// = = = = = = = = = = = = = 

int main()
{
    float *myArray;
    myArray = (float *) calloc(ARR_SIZE, sizeof(float)); // create an initialized float array

    int i;
    for(i = 0; i < ARR_SIZE; i++)
    {
        float *elementPtr = &myArray[i];
        printf("The address of the '%iº' element is: '%p'\n", i, elementPtr);
    }

    free(myArray);
}