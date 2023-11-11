// @AsherLucRen 
// Recebe 3 valores e retorna-os ordenados. Caso sejam iguais a função retorna 1 e retorna 0 se distintos.  

#include <stdio.h>
#include <locale.h>
// = = = = = = = = = = = = = = 

int main() {
    
    float values[3], orderedValues[3];
    
    getValues(&values);
    
    puts("ANTES DE ORDENAR");
    printf("1º pos: %f", values[0]);
    printf("\n2º pos: %f", values[1]);
    printf("\n3º pos: %f\n\n", values[2]);
    
    getOrderedValues(&values, &orderedValues);
    
    puts("DEPOIS DE ORDENAR");
    printf("1º pos: %f", orderedValues[0]);
    printf("\n2º pos: %f", orderedValues[1]);
    printf("\n3º pos: %f", orderedValues[2]);

    return 0;
}

void getValues(int *memToSave)
{
    puts("Insert three values above: ");
    printf("1º - "); scanf("%f", &memToSave[0]);
    printf("\n2º - "); scanf("%f", &memToSave[1]);
    printf("\n3º - "); scanf("%f", &memToSave[2]);
}

void getOrderedValues(int *valuesToOrder, int *orderedValues)
{
    if(valuesToOrder[0] >= valuesToOrder[1]) // se 1º>2º
    {
        if(valuesToOrder[0] >= valuesToOrder[2]) // se 1º>3º
            if(valuesToOrder[1] >= valuesToOrder[2]) // se 2º>3º
            { // 1º >= 2º >= 3º
                orderedValues[0] = valuesToOrder[0]; 
                orderedValues[1] = valuesToOrder[1]; 
                orderedValues[2] = valuesToOrder[2]; 
            }
            else
            { // 1º >= 3º >= 2º
                orderedValues[0] = valuesToOrder[0]; 
                orderedValues[1] = valuesToOrder[2]; 
                orderedValues[2] = valuesToOrder[1]; 
            }
        else 
        { // 3º >= 1º >= 2º
            orderedValues[0] = valuesToOrder[2];
            orderedValues[1] = valuesToOrder[0];
            orderedValues[2] = valuesToOrder[1];
        }   
    }
    else // 2º > 1º
    {
        if(valuesToOrder[1] >= valuesToOrder[2]) // se 2º>3º
            if(valuesToOrder[0] >= valuesToOrder[2]) // se 1º>3º
            { // 2º >= 1º >= 3º
                orderedValues[0] = valuesToOrder[1]; 
                orderedValues[1] = valuesToOrder[0]; 
                orderedValues[2] = valuesToOrder[2]; 
            }
            else // 2º >= 3º >= 1º
            {
                orderedValues[0] = valuesToOrder[1]; 
                orderedValues[1] = valuesToOrder[2]; 
                orderedValues[2] = valuesToOrder[0]; 
            }
        else // 3º >= 2º >= 1º
        {
            orderedValues[0] = valuesToOrder[2];
            orderedValues[1] = valuesToOrder[1];
            orderedValues[2] = valuesToOrder[0];
        }
    }
}