/*
	Name: Laços_1.cpp
	Author: Lucas Mateus
	Date: 18/04/23 07:54
	Description: Programa para calcular a media de 7 números usando o while
*/

/* IMPORTAÇÕES */
#include <stdio.h>
#include <iostream>

main()
{
	/* Coisa q eu n sei o nome */
	setlocale(LC_ALL, "portuguese");
	
	
	/* VARIÁVEIS */
	int i, num, soma;
	float med;
	
	
	/* INICIALIZAÇÃO DE VARIÁVEIS */
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
		
	
	/* CALCULA A MÉDIA */
	med = (float) soma/i;
	
	
	/* EXIBIÇÃO DE VALORES */
		printf("\nVALORES: \n\n");
		printf("\nContador: %d", i);
		printf("\nSoma: %d", soma);
		printf("\nA média é: %f", med);
}
