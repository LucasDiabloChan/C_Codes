// @AsherLucRen
// Manipulation of the values from a (5th list, exercise 4)

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5
// = = = = = = = = = = = = = 

int main()
{
    int i, *myIntArray;
    myIntArray = (int *) malloc(ARR_SIZE);

    int *ptr = &myIntArray[0];

    // get the values
    for(i = 0; i < ARR_SIZE; i++)
    {
        printf("Insert an integer value: ");
        scanf("%i", ptr++);
    }
    
    ptr = &myIntArray[ARR_SIZE-1]; // get the last index address

    // show the values
    for(i = 0; i < ARR_SIZE; i++)
    {
        printf("%iº value: %i\n", (ARR_SIZE - i), *ptr--);
    }
}