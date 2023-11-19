// @AsherLucRen
// Manipulation of three distincts variables using pointers (5th list, exercise 3)

#include <stdio.h>
#include <stdlib.h>

// = = = = = = = = = = = = = = 

int main()
{
    int intVar, *intPtr;
    intVar = 1322;
    intPtr = &intVar;

    float floatVar, *floatPtr;
    floatVar = 13.22f;
    floatPtr = &floatVar;

    char charVar, *charPtr;
    charVar = 'a';
    charPtr = &charVar;

    printf("Before change values: \n--> int: %i\n--> float: %.2f\n--> char: %c\n\n", intVar, floatVar, charVar);

    *intPtr = 2213;
    *floatPtr = 22.13f;
    *charPtr = 'T';

    printf("After change values: \n--> int: %i\n--> float: %.2f\n--> char: %c\n\n", intVar, floatVar, charVar);
}