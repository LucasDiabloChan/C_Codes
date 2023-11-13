// @AsherLucRen
// Recebe duas frases e cria uma terceira frase intercalando as palavras de cada frase.

#include <stdio.h>
#include <string.h>
// = = = = = = = = = = = = = = 

// receber primeira frase
    // receber primeira frase

// receber a segunda frase
    // armazenar a segunda frase

// criar a terceira frase
    // pegar uma palavra da primeira string
    // pegar uma palavra da segunda string

// mostrar a frase criada

// - - - - - - - - - - - - - - 
char getWord(char *phrase)
{
    int i, phraseSize = strlen(phrase);
    char word[phraseSize];

    for(i = 0; i < phraseSize; i++)
    {
        if(phrase[i] == ' ' || phrase[i] == '\t' || phrase[i] == '\n')
        {    
            phrase[i] = '\0'; 
            break;
        }
        else
        {
            if(phrase[i] != '\0')
            {
                word[i] = phrase[i];
                phrase[i] = '\0';
            }
        }
    }

    return word;
}

void generateCombinedPhrase(char *primeiraFrase, char *segundaFrase, char *fraseCombinada)
{
    int tokenFirstPhrase, tokenSecondPhrase;
    tokenFirstPhrase = tokenSecondPhrase = 1;
    
    while(tokenFirstPhrase == 1 || tokenSecondPhrase == 1)
    {
        if(tokenFirstPhrase != 0)
        {
            char *firstWord = getWord(primeiraFrase);
            
            if(strlen(firstWord) != 0)
                strcat(fraseCombinada, firstWord);
            else
                tokenFirstPhrase = 0;
        }
        
        if(tokenSecondPhrase != 0)
        {
            char *secondWord = getWord(segundaFrase);
            
            if(strlen(secondWord) != 0)
                strcat(fraseCombinada, secondWord);
            else
                tokenSecondPhrase = 0;
        }
    }
}

int main()
{
    char primeiraFrase[30], segundaFrase[30], fraseCombinada[60];

    printf("_ _ _ _ _ COMBINAÇÃO DE FRASES _ _ _ _ _\n");
    printf("Insira uma frase (limite de 30 caracteres): \n");
    fgets(primeiraFrase, 30, stdin);
    printf("Insira outra frase (limite de 30 caracteres): \n");
    fgets(segundaFrase, 30, stdin);

    generateCombinedPhrase(primeiraFrase, segundaFrase, fraseCombinada);

    printf("Frase combinada: \n%s", fraseCombinada);
}