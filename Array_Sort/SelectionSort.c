#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define length(x) sizeof(x)/sizeof(x[0])

int vet[100];

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int size, i, j, aux, lower;
	int swaps, compars;
	
	swaps = compars = 0;
	size = length(vet);
	
	srand(time(NULL));
	
	for(i = 0; i < size; i++)
	{
		vet[i] = rand()%99;
	}
	
	
	puts("__VETOR ORIGINAL__");
	for(i = 0; i < size; i++)
		printf("%d :: ", vet[i]);
		
	// - - - - - - - - - - - - - - - - - - - //
	
	
	for(i = 0; i < size; i++)
	{
		lower = i;
		
		for(j = i+1; j < size; j++)
		{
			compars++;
			if(vet[j] < vet[lower])
				lower = j;
		}
		
		if(i != lower)
		{
			swaps++;
			aux = vet[i];
			vet[i] = vet[lower];
			vet[lower] = aux;
		}
	}
	
	puts("\n\n__VETOR ORDENADO__");
	for(i = 0; i < size; i++)
		printf("%d :: ", vet[i]);
		
	printf("\ntrocas: %d\ncomparações: %d", swaps, compars);
}
