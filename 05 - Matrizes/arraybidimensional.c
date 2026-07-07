/*
	Name: arraybidimensional.c
	Author: Daniel Benetti
	Date: 28/05/26 11:24
	Description: Testando Matrizes
*/

#include <stdio.h>

main()
{
	int mat[3][3];
	int i, j, ordem;
	i = 0;
	j = 0;
	ordem = 3;
	
	puts("Digite 9 numeros inteiros");
	do
	{			
		do{
				//laço para andar em j
				printf("[%d][%d]:", i, j);
				scanf("%d", &mat[i][j]);
				j = j + 1;
		}while(j < 3);
	//para andar em i
	j = 0;
	i = i + 1;
	}while(i < 3);
	
	//Exibir conteúdo da matriz
	puts("\n\nConteudo da matriz:");
	for(i = 0; i <ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			printf("[%d]\t", mat[i][j]);
	puts("\n");
	}
	
	//Exibindo os elementos da diagonal principal
	puts("\n\nElementos da diagonal principal (DP))");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if(i == j)
				printf("[%d]", mat[i][j]);
	}
	
	//Elementos acima da DP
	puts("\n\nElementos acima da DP");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < 3; j++)
			if(i < j)
				printf("[%d]", mat[i][j]);
	}
	
	//Elementos abaixo da DP
	puts("\n\nElementos abaixo da DP");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < 3; j++)
			if(i > j)
				printf("[%d]", mat[i][j]);
	}
	
	//Elementos da Diagonal secundária
	puts("\n\nElementos Diagonal Secundaria (DS)");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if((i + j) == (ordem - 1))
				printf("[%d]", mat[i][j]);
	}

	//Elementos acima da DS
	puts("\n\nElementos acima da DS");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if((i + j) < (ordem - 1))
				printf("[%d]", mat[i][j]);
	}
	
		
	//Elementos abaixo da DS
	puts("\n\nElementos abaixo da DS");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if((i + j) > (ordem - 1))
				printf("[%d]", mat[i][j]);
	}
	
}//fim do programa
