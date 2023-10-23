//@AsherLucRen
// Concatenação de strings, com e sem a biblioteca >> string.h <<

#include <stdio.h>
#include <locale.h>
#include <string.h>

// - - - - - - - - - - - - - - - - - - - - - 
int main()
{
    setlocale(LC_ALL, "portuguese"); // formatação de caracteres em PT
    
    char palavra1_1[] = "Primeiro";
    
    char palavra1_2[10];
    strcpy(palavra1_2, " Yameteee"); // espaço em branco proposital
    
    // Saída de dados
    puts("___SAÍDA_DE_DADOS___");
    
    printf("Primeira string: %s\n", palavra1_1);
    printf("Segunda string: %s\n", palavra1_2);
    printf("Concatenação (convencional): %s_%s\n", palavra1_1, palavra1_2);
    printf("Concatenação (com strcat): %s\n", strcat(palavra1_1, palavra1_2));

    return 0;
}
