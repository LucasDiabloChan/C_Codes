// @AsherLucRen
// Recebe um texto e conta a quantidade de vogais

#include <stdio.h>
#include <locale.h>
#include <string.h>

// - - - - - - - - - - - - - - - - - - - - - 
int main()
{
    setlocale(LC_ALL, "portuguese"); // formatação de caracteres em PT
    
    char frase[50];
    int i, tamanhoFrase, qtdVogais;
    
    printf("Digite uma frase, suka: \n");
    fgets(frase, 50, stdin);    // função alternativa ao >> scanf e gets <<
    
    tamanhoFrase = strlen(frase);
    
    for(i = 0; i < tamanhoFrase; i++)
    {
        switch(frase[i])
        {
            case 'a': case 'A': 
            case 'e': case 'E': 
            case 'i': case 'I': 
            case 'o': case 'O': 
            case 'u': case 'U':
                qtdVogais++;
                break;
            
            default:
                break;
        }
    }
    
    puts("___SAÍDA_DE_DADOS___");
    printf("Quantidade de vogais: %d", qtdVogais);
    
    return 0;
}
