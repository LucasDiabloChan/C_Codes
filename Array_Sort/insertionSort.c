#include <stdio.h>
#include <locale.h>

#define tam(x) sizeof(x)/sizeof(x[0])


void insertionSort(int *);


int vet[] = {17, 24, -5, 8, 15, 10, 1, 19, 12, 3};
int tamVet = tam(vet);
int compars, changes;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	changes = compars = 0;
	
	int i;
	
	puts("Vetor DESORDENADO");
	for(i = 0; i < tamVet; i++)
	{
		printf("%d   ", vet[i]);
	}
	
	insertionSort(vet);
	
	puts("\n\nVetor ORDENADO");
	for(i = 0; i < tamVet; i++)
	{
		printf("%d   ", vet[i]);
	}
	
	printf("\n\nTrocas: %d \nComparações: %d", changes, compars);
}

void insertionSort(int *vetor)
{
	int i, j, key, compars, changes;
	key = changes = compars = 0;
	
	for(i = 1; i < tamVet; i++)
	{
		key = vetor[i];
		j = i -1;
		
		while(j >= 0)
		{
			compars++;
			
			if(vetor[j] > key)
			{
				changes++;
				vet[j+1] = vetor[j];
				j--;
			}
			else
				break;
		}
		
		vetor[j+1] = key;
	}
}
