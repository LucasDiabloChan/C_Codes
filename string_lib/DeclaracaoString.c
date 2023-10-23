//@AsherLucRen
// Declaração e iniciaçização de strings, com e sem a biblioteca >> string.h <<

#include <stdio.h>
#include <string.h>

// - - - - - - - - - - - - - - - - - - - - - 
int main()
{
    // Convencional
    char palavra1_1[] = {'P', 'r', 'i', 'm', 'e', 'i', 'r', 'o'};
    char palavra1_2[] = "Programa";
    
    // Com a biblioteca > string.h <
    char palavra2_1[10], palavra2_2[5];
    strcpy(palavra2_1, "Yameteee");
    strcpy(palavra2_2, "Onii");
    
    // Saída de dados
    puts("___SAÍDA_DE_DADOS___");
    
    printf("Primeira string: %s\n", palavra1_1);
    printf("Segunda string: %s\n", palavra1_2);
    printf("Terceira string: %s\n", palavra2_1);
    printf("Quarta string: %s\n", palavra2_2);

    return 0;
}
