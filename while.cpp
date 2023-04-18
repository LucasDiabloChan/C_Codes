/*
	Name: La�os_1.cpp
	Author: Lucas Mateus
	Date: 18/04/23 07:54
	Description: Programa para calcular a media de 7 n�meros usando o while
*/

/* IMPORTA��ES */
#include <stdio.h>
#include <iostream>

main()
{
	/* Coisa q eu n sei o nome */
	setlocale(LC_ALL, "portuguese");
	
	
	/* VARI�VEIS */
	int i, num, soma;
	float med;
	
	
	/* INICIALIZA��O DE VARI�VEIS */
	i = num = soma = 0;
	med = 0.0;
	
	
	// Bagulho loko	
	while(true){	
		printf("\nInsira ai: ");
		scanf("%d", &num);
		
		if(num == 0)
			break;
		
		
		soma += num;
		i++;
	}
		
	
	/* CALCULA A M�DIA */
	med = (float) soma/i;
	
	
	/* EXIBI��O DE VALORES */
		printf("\nVALORES: \n\n");
		printf("\nContador: %d", i);
		printf("\nSoma: %d", soma);
		printf("\nA m�dia �: %f", med);
}
