// @asherLucRen
// Receive N values and calculate the arithmetic average. Ends the input with 0 (6th list, exercise 1)

#include <stdio.h>
#include <stdlib.h>

#define dft_size 5
// = = = = = = = = = = = = = = = 

int main()
{
    int i, newSize;
    i = 0;
    newSize = dft_size + 1;

    float *fltValues = (float *) calloc(dft_size, sizeof(float));
    float sum = 0;

    while(1)
    {
        printf("Insert a value (type '0' to stop): ");
        scanf("%f", &fltValues[i]);

        if(fltValues[i] == 0)
            break;
        
        sum += fltValues[i];

        if(i == dft_size || i == (newSize-1))
        {
            newSize++; // expand the max size

            fltValues = (float *) realloc(fltValues, (newSize) * sizeof(float)); // realloc the new array

            if(fltValues == NULL)
            {
                printf("Error on reallocation.");
                exit(EXIT_FAILURE);
            }
        }

        i++;
    }

    free(fltValues);

    printf("\n _ _ _ _ RESULT _ _ _ _ \n");
    printf("Number of elements:  %i   \n", i);
    printf("Sum of all elements: %.3f \n", sum);
    printf("Arithmetic mean:     %.3f \n", (sum/i));
}