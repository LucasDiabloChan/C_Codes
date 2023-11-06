// @AsherLucRen
// Recebe 3 valores e retorna-os ordenados. Caso sejam iguais a função retorna 1, se distintos, retorna 0. 

#include <stdio.h>
#include <locale.h>

// = = = = = = = = = = = = = = = = = 

void recebeValores();

float valoresOrdenados[4];
    // [0] - 0 ou 1, para distintos ou iguais
    // [1] - menor valor
    // [2] - valor intermediario
    // [3] - maior valor

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    puts("_ _ _ _ORDENAÇÃO DE VALORES_ _ _ _");
    
    printf("\nDigite três (3) valores: \n");
    recebeValores();
    
    if(valoresOrdenados[0] == 1)
        printf("Valores iguais? Sério?");
        
    printf("Valores ordenados (decrescente): \n");
    printf("1º valor: %.0f\n", valoresOrdenados[3]);
    printf("2º valor: %.0f\n", valoresOrdenados[2]);
    printf("3º valor: %.0f\n", valoresOrdenados[1]);
    
    
    return 0;
}

void recebeValores()
{
    float valor1, valor2, valor3;
    
    printf("\n1º valor: ");
    scanf("%f", &valor1);
    
    printf("\n2º valor: ");
    scanf("%f", &valor2);
    
    printf("\n3º valor: ");
    scanf("%f", &valor3);
    
    if(valor1 != valor2 && valor1 != valor3)
        valoresOrdenados[0] = 0;
    else
        valoresOrdenados[0] = 1;
    
    // menor valor:
    if(valor1 < valor2)
    {
        if(valor1 < valor3)
            valoresOrdenados[1] = valor1;
        else
            valoresOrdenados[1] = valor3;
    }
    else
    {
        if(valor2 < valor3)
            valoresOrdenados[1] = valor2;
        else
            valoresOrdenados[1] = valor3;
    }
    
    // maior valor:
    if(valor3 > valor1)
    {
        if(valor3 > valor2)
            valoresOrdenados[3] = valor3;
        else
            valoresOrdenados[3] = valor2;
    }
    else
    {
        if(valor1 > valor2)
            valoresOrdenados[3] = valor1;
        else
            valoresOrdenados[3] = valor2;
    }
    
    // valor intermediario:
    if(valor1 > valoresOrdenados[1] && valor1 < valoresOrdenados[3])
        valoresOrdenados[2] = valor1;
    else if(valor2 > valoresOrdenados[1] && valor2 < valoresOrdenados[3])
        valoresOrdenados[2] = valor2;
    else
        valoresOrdenados[2] = valor3;
}












