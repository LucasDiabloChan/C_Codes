//@AsherLucRen
// Concatenação de strings, com e sem a biblioteca >> string.h <<

#include <stdio.h>
#include <locale.h>
#include <string.h>

// - - - - - - - - - - - - - - - - - - - - - 
int main()
{
    setlocale(LC_ALL, "portuguese"); // formatação de caracteres em PT
    
    char frase[50], letraSubstituta;
    int i, tamanhoFrase, qtdLetrasSubstituidas;
    
    letraSubstituta = '*';
    
    printf("Digite uma frase, suka: \n");
    fgets(frase, 50, stdin);                // função alternativa ao >> scanf e gets <<
    
    tamanhoFrase = strlen(frase);
    
    for(i = 0; i < tamanhoFrase; i++)
    {
        switch(_strlwr(frase))
        {
            case 'a': case 'e': case 'i': 
            case 'o': case 'u':
                frase[i] = letraSubstituta;
                qtdLetrasSubstituidas++;
                break;
            
            default:
                break;
        }
    }
    
    puts("___SAÍDA_DE_DADOS___");
    printf("Quantidade de letras substituidas: %d\n", qtdLetrasSubstituidas);
    printf("Frase modificada: %s", frase);
    
    return 0;
}
