/*
	Name: vetor1.cpp
	Author: Daniel Benetti
	Date: 14/05/26 10:17
	Description: Programa para realizar opera��es com arrays unidimensionais.
*/


# include <stdio.h>




main()
{
	int vet[10], i;
	puts("Digite 10 numeros inteiros:  ");
	//fazer a carga no vetor com 10 n inteiros
	i = 0;
	do
	{
		printf("Digite o %do numero: ", i+1);
		scanf("%i", &vet[i]);
		i++;
	}while(i < 10);
	puts("\n\n===> Conteudo do vetor <===");
	i = 0;
	while(i < 10)
	{
		printf("[%i]", vet[i]); //[]pipe
		i = i + 1;	
	}
	puts("\n\n===> Conteudo do vetor ao contrario <===");
	for (i = 9; i >= 0; i--) //ou >-1
	{
		printf("[%i]", vet[i]); //[]pipe
	}
}

