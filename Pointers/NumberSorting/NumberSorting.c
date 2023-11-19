// @AsherLucRen 
// Recebe 3 valores e retorna-os ordenados. 
// Caso sejam iguais a função retorna 1 e retorna 0 se distintos. (5th list, exercise 5)  

#include <stdio.h>
#include <locale.h>
// = = = = = = = = = = =

void getValues(float *memToSave)
{
    printf("Insert three values above: ");
    
    printf("\n1º - "); 
    scanf("%f", &memToSave[0]);
    
    printf("\n2º - "); 
    scanf("%f", &memToSave[1]);
    
    printf("\n3º - "); 
    scanf("%f", &memToSave[2]);
}

void orderValues(float *valuesToOrder, float *orderedValues)
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

int main() {
    
    float values[3], orderedValues[3];
    
    getValues(values);
    
    printf("\nBEFORE ORDERING");
    printf("\n1º pos: %.0f", values[0]);
    printf("\n2º pos: %.0f", values[1]);
    printf("\n3º pos: %.0f", values[2]);
    
    orderValues(values, orderedValues);
    
    printf("\nAFTER ORDERING");
    printf("\n1º pos: %.0f", orderedValues[0]);
    printf("\n2º pos: %.0f", orderedValues[1]);
    printf("\n3º pos: %.0f", orderedValues[2]);

    getchar();
    return 0;
}