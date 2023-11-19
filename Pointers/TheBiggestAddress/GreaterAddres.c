// @AsherLucRen
// Compare two addresses from two integer variables (5th list, exercise 1)

#include <stdio.h>
// = = = = = = = = = = = = = = =

int main()
{
    int firstVar, secndVar;
    firstVar = secndVar = 0;

    int *firstPtr, *secndPtr;
    firstPtr = &firstVar;
    secndPtr = &secndVar;

    if(firstPtr > secndPtr)
        printf("The biggest alocated addres size is \"%p\".", firstPtr);
    else
        printf("The biggest alocated addres size is \"%p\".", secndPtr);

}