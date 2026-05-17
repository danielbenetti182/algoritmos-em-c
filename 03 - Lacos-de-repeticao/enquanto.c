/*
	Name: EnquantoFaca.c
	Author: Daniel Benetti
	Date: 02/04/26 10:24
	Description: programa para mostrar laço de repetição enquanto faça
*/

//importação

# include <stdio.h>

main()
{
	int soma, cont, num;
	num = soma = cont = 0;
	float media = 0.0;
	
	puts("Digite 10 numeros inteiros: ");
	puts("============================");
	while (cont < 5)
	{
			printf("%do num: ", cont+1);
			scanf("%d", &num);
			soma = soma + num;
			cont = cont +1;
		}
		media = (float) soma/cont;
		printf("A media eh: %.3f", media);
	}
	
