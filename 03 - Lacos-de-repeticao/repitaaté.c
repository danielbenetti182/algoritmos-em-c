/*
	Name: repitate.cpp
	Author: Daniel Benetti
	Date: 02/04/26 09:56
	Description: programa para mostrar laço de repetição repita até
*/


//Importação
# include <stdio.h>
# include <locale.h>



main(){
	int num, soma, cont;
	float media;
	cont = num = soma = 0;
	media = 0.0;
	
	puts("Insira 10 numeros inteiros: ");
	puts("=============================");
	do{
		printf("%do num:", cont+1);
		scanf("%d", &num);
		soma = soma + num; //acumulador
		cont = cont + 1;
	} while(cont<10);
	media = (float)soma/cont; //casting
	printf("a media dos numero eh %.2f", media);
	
	
}//fim do programa
