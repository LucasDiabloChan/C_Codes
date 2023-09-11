// @AsherLucRen
// Algoritmo para ordenação de matrizes (crescente)

#include <stdio.h>
#include <limits.h>
// ================================================

// ================================================
// Abreviações de código
// ================================================
#define arrTam 5

// ================================================
// Retorna o array ordenado
// ================================================
int* getArrayOrdenado(int *array, int size)
{
    int a, count = size;
    
    while(count-- > 0){
        for (int i = 0; i < size-1; i++) {
            if(array[i] > array[i+1]){
                a = array[i];
                array[i] = array[i+1];
                array[i+1] = a;
            }
        }
    }
    
    return array;
}

int main()
{
    int numerosUsuario[arrTam];
    int i = 0;
    
    while(i < arrTam){
        int numeroRecebido;
        
        printf("Digite um valor: (-1 para sair)\n");
        scanf("%d", &numeroRecebido);
        
        if(numeroRecebido == -1)
            break;
            
        numerosUsuario[i++] = numeroRecebido;
    }
    
    int* arrayOrdenado = getArrayOrdenado(numerosUsuario, i);
    
    for (int v = 0; v < i; v++) {
        printf("| %d  ", arrayOrdenado[v]);
    }
    
    return 0;
}
