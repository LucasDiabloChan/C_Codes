#include <stdio.h>
#include <locale.h>

#define tam(x) sizeof(x)/sizeof(x[0])


void shellSort(int *);
void popularVetor(int *);


//int vet[] = {17, 24, -5, 8, 15, 10, 1, 19, 12, 3};
int vet[1000];
//int tamVet = tam(vet);
int tamVet = 1000;
int compars, changes;


int main()
{
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	
	changes = compars = 0;
	popularVetor(vet);
	
	int i;
	
	puts("Vetor DESORDENADO");
	for(i = 0; i < tamVet; i++)
	{
		printf("%d   ", vet[i]);
	}
	
	shellSort(vet);
	
	puts("\n\nVetor ORDENADO");
	for(i = 0; i < tamVet; i++)
	{
		printf("%d   ", vet[i]);
	}
	
}

void shellSort(int *vetor)
{
	int i, j, h, key;
	key = 0;
	h = 1;
	
	while(h < tamVet)
	{
		h *= 3 + 1;
	}
	
	while(h > 0)
	{
		for(i = h; i < tamVet; i++)
		{
			key = vet[i];
			j = i;
			
			compars++;
			while(j > h-1 && key <= vet[j - h])
			{
				vet[j] = vet[j - h];
				j -= h;
				
				changes++;
			}
			vet[j] = key;
			
			
		}
		h /= 2;
	}
	
	printf("\n\nTrocas: %d \nComparações: %d", changes, compars);
}

void popularVetor(int *vetor)
{
	int i;
	for(i = 0; i < tamVet; i++)
	{
		vetor[i] = rand()%1000;
	}
}
