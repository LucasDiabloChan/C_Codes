// @AsherLucRen
// Receive a phrase and two wors, one to find and the other to replace

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// = = = = = = = = = = = = = = = = = = 

char *replaceWordWith(char *toFind, char *toReplace, char *fullyPhrase)
{
	int i;
    char *pt = strstr(fullyPhrase, toFind);
    char *firstStr;

    if(pt == NULL){
        printf("cannot find string \n");
        return NULL;
    }

    firstStr = (char* )malloc(100 * sizeof(char));

    // copy just until i find what i need to replace
    // i tried to specify the length of firstStr just with pt - str

    strncpy(firstStr, fullyPhrase, strlen(fullyPhrase) - strlen(pt)); 
    strcat(firstStr, toReplace);
    strcat(firstStr, pt + strlen(toFind));

    for(i = 0; i < strlen(firstStr); i++)
        fullyPhrase[i] = firstStr[i];
    return fullyPhrase;
}

int main()
{
	char *phrase, *find, *replace, *result;
	size_t bufferSize;

    printf("Type a phrase above: \n");
	scanf("%zu", &bufferSize);
	phrase = (char *) calloc(phrase, bufferSize + 1);
	scanf(" %[^\n]", phrase);

    printf("Search for: \n");
	scanf("%zu", &bufferSize);
	find = (char *) calloc(find, bufferSize + 1);
	scanf(" %[^\n]", find);

    printf("Replace with: \n");
	scanf("%zu", &bufferSize);
	replace = (char *) calloc(bufferSize + 1, sizeof(char));
	scanf(" %[^\n]", replace);

	// call to some function (to implement)
	result = replaceWordWith(find, replace, phrase);
	
	printf("Output: \n%s", phrase);
}