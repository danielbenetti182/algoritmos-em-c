/*
	Name: arraySOMA.C
	Author: Daniel Benetti
	Date: 28/05/26 11:43
	Description: 
*/


#include <stdio.h>

main()
{
	int mat[3][3];
	int i, j, ordem, DP, AcDP,AbDP, DS, AcDS, AbDS, maiorE;
	i = 0;
	j = 0;
	ordem = 3;
	DP = 0;
	AcDP = 0;
	AbDP = 0;
	DS = 0;
	AbDS = 0;
	AcDS = 0;
	
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
			{
				printf("[%d]", mat[i][j]);
				DP = DP + mat[i][j];
			
		}
	}
	maiorE = DP;
	printf("\nSoma DP = %d", DP);
	
	//Elementos acima da DP
	puts("\n\nElementos acima da DP");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < 3; j++)
			if(i < j)
			{
				printf("[%d]", mat[i][j]);
				AcDP = AcDP  + mat[i][j];
		}
	}
	printf("\nSoma Acima da DP = %d", AcDP);
	if (AbDP > maiorE)
	maiorE = AbDP;
	
	//Elementos abaixo da DP
	puts("\n\nElementos abaixo da DP");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < 3; j++)
			if(i > j){
				printf("[%d]", mat[i][j]);
				AbDP = AbDP + mat[i][j];
		}
	}
	printf("\nSoma abaixo da DP = %d", AbDP);
	if (AbDP > maiorE)
	maiorE = AbDP;
	
	//Elementos da Diagonal secundária
	puts("\n\nElementos Diagonal Secundaria (DS)");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if((i + j) == (ordem - 1))
			{
				printf("[%d]", mat[i][j]);
				DS = DS + mat[i][j];
		}
	}
	printf("\nSoma da DS = %d", DS);	
	if (DS > maiorE)
		maiorE = DS;
	
	//Elementos acima da DS
	puts("\n\nElementos acima da DS");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if((i + j) < (ordem - 1))
			{
				printf("[%d]", mat[i][j]);
				AcDS = AcDS + mat[i][j];
		}
	}
	printf("\nSoma acima da DS = %d", AcDS);	
	if (AcDS > maiorE)
		maiorE = AcDS;
		
	//Elementos abaixo da DS
	puts("\n\nElementos abaixo da DS");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
			if((i + j) > (ordem - 1))
			{
				printf("[%d]", mat[i][j]);
				AbDS = AbDS + mat[i][j];
		}
	}
	printf("\nSoma abaixo da DS = %d", AbDS);	
	if (AbDS > maiorE)
		maiorE = AbDS;
	
	//mostrando maior valor
	if (maiorE = DP)
		printf("Diagonal Principal tem a maior soma sendo: %d", maiorE);
	else (maiorE = AbDP)
		printf("Diagonal Principal tem a maior soma sendo: %d", maiorE);
	else (maiorE = AcDP)
		printf("Diagonal Principal tem a maior soma sendo: %d", maiorE);
	else (maiorE = DS)
		printf("Diagonal Principal tem a maior soma sendo: %d", maiorE);
	else (maiorE = AbDS)
		printf("Diagonal Principal tem a maior soma sendo: %d", maiorE);
	else (maiorE = AcDS)
		printf("Diagonal Principal tem a maior soma sendo: %d", maiorE);
	
	

}//fim do programa
