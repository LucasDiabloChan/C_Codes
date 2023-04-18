/*
	Name: La�os_3.cpp
	Author: Lucas Mateus
	Date: 18/04/23 07:54
	Description: Programa para calcular a media de 7 n�meros usando o for
*/


/* IMPORTA��ES */
# include <stdio.h>
# include <iostream>
# include <locale.h>

main()
{
	/* CONFIGURA��O DE CARACTERES */
		setlocale(LC_ALL, "portuguese");
	
	/* TITULO DO PROGRAMA */	
		puts("CALCULADOR DE M�DIA (finito)");
	
	
	/* BLOCO DE VARI�VEIS */
		int num;

	/* INICIALIZA��O DE VARI�VEIS */
		num = 0;
	
	/* PEGA O N�MERO PARA FAZER A TABUADA */
		printf("Insira um n�mero: ");
		scanf("%d", &num);
	
	/* IMPRIME A TABUADA A PARTIR DO N� INSERIDO */
		for(int i = 1; i <= num; i++){
			
			printf("\n%d X %d = %d", num, i, num * i);
		}
		
		
	
		
}
