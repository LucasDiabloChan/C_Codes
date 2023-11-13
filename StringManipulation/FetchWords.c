// @AsherLucRen
// Recebe duas frases e cria uma terceira frase intercalando as palavras de cada frase.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// = = = = = = = = = = = = = = 

char getWord(char *phrase, char *placeToSave)
{
    int i, phraseSize = strlen(phrase);
    
    char *word;
    word = (char*)calloc(phraseSize+1, sizeof(char));

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
    word[i] = '\0';
    strcpy(placeToSave, word);
    free(word);
}

void generateCombinedPhrase(char *primeiraFrase, char *segundaFrase, char *fraseCombinada)
{
    bool hasMoreWordsPhrase1, hasMoreWordsPhrase2;
    hasMoreWordsPhrase1 = hasMoreWordsPhrase2 = true;
    
    while(hasMoreWordsPhrase1 || hasMoreWordsPhrase2)
    {
        if(hasMoreWordsPhrase1)
        {
            char *firstWord;
            firstWord = (char*) calloc(strlen(primeiraFrase), sizeof(char));
            getWord(primeiraFrase, firstWord);
            
            if(strlen(firstWord) != 0)
                strcat(fraseCombinada, firstWord);
            else
                hasMoreWordsPhrase1 = false;
        }
        
        if(hasMoreWordsPhrase2)
        {
            char *secondWord;
            secondWord = (char*) calloc(strlen(segundaFrase), sizeof(char));
            getWord(segundaFrase, secondWord);
            
            if(strlen(secondWord) != 0)
                strcat(fraseCombinada, secondWord);
            else
                hasMoreWordsPhrase2 = false;
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

    printf("Frase combinada: \n%s\n", fraseCombinada);
}