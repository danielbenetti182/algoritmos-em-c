/*
	Name: vetor4fibonacci.c
	Author: Daniel Benetti
	Date: 14/05/26 12:03
	Description: Programa para carregar um Vetor com elementos de Fibonacci
*/


#include <stdio.h>


main()
{
	int ant, atual, prox, qtde, cont;
	ant = 1;
	atual = 1;
	qtde = prox = 0;
	//levantando quantidade
	printf("Quantos elementos de Fibonacci serão exibidos ?: ");
	scanf("%d", &qtde);
	int fibo[qtde];
	//printf("%d, ", atual); 
	fibo[0] = ant;
	//printf("%d, ", ant);
	fibo[1] = atual;
	cont =  2;
	//Laço de contagem
	while(cont < qtde) 
	{
		prox = ant + atual;
		fibo[cont] = prox;
		//printf("%d, ", prox);
		ant = atual;
		atual = prox;
	cont++;		
	}
	puts("\n\nConteudo do vetor Fibonacci: ");
	for (cont = 0; cont < qtde; cont++)
	{
		printf("[%d]", fibo[cont]);
	}
	
	
}//fim do programa
