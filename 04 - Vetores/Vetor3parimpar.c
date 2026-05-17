/*
	Name: vetor3parimpar.c
	Author: Daniel Benetti
	Date: 14/05/26 11:30
	Description: Programa para separar números pares
				dos ìmpares e vetores especificos.
				
*/


#include <stdio.h>

main()
{
	int par[20],impar[20], num;
	int p, i, cont; 
	p = i = cont = num = 0;
	puts("Programa para separar numeros PARES dos IMPARES");
	
	//Carga no vetor
	do
	{
		printf("%do numero: ", cont + 1);
		scanf("%i", &num);
			if(num%2 == 0)
			{
				par[p] = num;
				p++;
			}
			else
			{
				impar[i] = num;
				i++;
			}
		cont++;
	} while(cont < 20);
	
	//carregando os vetores
	//carregando par
	cont = 0;
	puts("\n\nConteudo do vetor PAR: ");
	while(cont < p)
	{
		printf("[%d]", par[cont]);
		cont++;
	}
	//carregando impar
	cont = 0;
	puts("\n\nConteudo do vetor IMPAR: ");
	while(cont < i)
	{
		printf("[%d]", impar[cont]);
		cont++;
	}
	
	
}//fim do programa
