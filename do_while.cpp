/*
	Name: La�os_1.cpp
	Author: Lucas Mateus
	Date: 18/04/23 07:54
	Description: Programa para calcular a media de 7 n�meros usando o do... while...
*/


/* IMPORTA��O DE BIBLIOTECAS */
#include <stdio.h>
#include <iostream>
main(){
	
	/* COISA DE IMPORTS */
	setlocale(LC_ALL, "portuguese");
	
	
	/* TITULO DO PROGRAMA */
	puts("Programa calculador de m�dia com Do... While...");
	
	
	/* VARI�VEIS */
		// Declara��o de vari�veis
		int num, soma, cont;
		
		// Inicializa��o de vari�veis
		num = 0; 
		cont = 0;
	
		
	/* RECEBENDO OS VALORES */
		do{
			
			// Mostra uma mensagem para o usu�rio
			printf("\n\n%d", cont++);
			printf("� Ko� meu nobre, inserte um number ai: ");			
			
			
			// Recebe um valor inserido pelo usu�rio
			scanf("%d", &num);
			
			
			// Se o user quiser parar, digita 0  e sai do loop
			if(num == 0)
				cont--;
				break;
			
			
			// Calcula a media
			soma += num;
		}while(1); // Enquanto cont for menor que 5...
	
	
	/* VALORES DO PROGRAMA */
		// Contador
		printf("\n\nValor do contador: %d", cont);
		
		// Soma
		printf("\n\nValor da soma: %d", soma);
	
	// Exibe o resultado
	printf("Aqui o resultado meu rei: %0.2f", (float)soma/cont);
	
}// fim do main
