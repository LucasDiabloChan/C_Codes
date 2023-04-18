/*
	Name: Laços_3.cpp
	Author: Lucas Mateus
	Date: 18/04/23 07:54
	Description: Programa para calcular a tabuada de um nº com o for
*/


/* IMPORTAÇÕES */
# include <stdio.h>
# include <iostream>
# include <locale.h>

main()
{
	/* CONFIGURAÇÃO DE CARACTERES */
		setlocale(LC_ALL, "portuguese");
	
	/* TITULO DO PROGRAMA */	
		puts("CALCULADOR DE MÉDIA (finito)");
	
	
	/* BLOCO DE VARIÁVEIS */
		int num;

	
	/* INICIALIZAÇÃO DE VARIÁVEIS */
		num = 0;
	
	
	/* PEGA O NÚMERO PARA FAZER A TABUADA */
		printf("Insira um número: ");
		scanf("%d", &num);
	
	
	/* IMPRIME A TABUADA A PARTIR DO Nº INSERIDO */
		for(int i = 1; i <= num; i++){
			
			printf("\n%d X %d = %d", num, i, num * i);
		}
}
