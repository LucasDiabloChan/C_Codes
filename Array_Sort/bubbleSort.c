/*
* Author: Asher_Ren
* Date: 11/06/2024
* Description: bubble sort algorithm
*/

#include <stdio.h>

void bubbleSort(int *, int, int);

int array[] = {200, 5, 1, 14, -5, 23, 86, -1};
int size = sizeof(array)/sizeof(int);

int main()
{
    int i;
    
    puts("VETOR DESORDENADO");
    for(i = 0; i < size; i++)
        printf("%d | ", array[i]);
    
    bubbleSort(array, 0, size-1);
    
    puts("\n\nVETOR ORDENADO");
    for(i = 0; i < size; i++)
        printf("%d | ", array[i]);
    
    return 0;
}

void bubbleSort(int *vet, int start, int end)
{
    int aux = 0, step = 1;
    int tam = size;

    while(start < end)
    {
        int i;
        for(i = 0; i < tam-1; i++)
        {
            if(vet[i] > vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
        
        printf("\nStep nº %d: | ", step++);
        
        for(i = 0; i < tam; i++)
            printf("%d | ", vet[i]);
        end = end-1;
    }
}
