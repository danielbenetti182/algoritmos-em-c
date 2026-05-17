/*
	Name: ParaFace.c
	Author: Daniel Benetti
	Date: 02/04/26 10:31
	Description: programa para mostrar laço de repetição Para Faça
*/

//importação
# include <stdio.h>

main(){
	int soma, cont, num;
	num = soma = 0;
	float media = 0.0;
	
	puts("Digite 10 numeros inteiros: ");
	puts("============================");
	for(cont = 0; cont < 10; cont = cont ++)
	{
		printf("%do numero: ", cont + 1);
		scanf("%d", &num);
		soma = soma + num;
	}
	media = (float) soma/cont;
	printf("A media eh: %.f", media);
}
