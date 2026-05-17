/*
	Name: 3numeromaior.c
	Author: Daniel Benetti
	Date: 19/03/26 11:18
	Description: Programa que compara 3 números
				 e devolve o maior
*/

//importação

# include <stdio.h>

main()
{
	int a, b ,c;
	a=b=c=0;
	
	puts("Programa para determinar o maior número!");
	puts("========================================");
	printf("insira o primeiro numero: "); 
	scanf("%d", &a);
	printf("insira o segundo numero: "); 
	scanf("%d", &b);
	printf("insira o terceiro numero: "); 
	scanf("%d", &c);
		if(a > b && a > c)
		 printf("o primeiro número %d é o maior", a);
		 	else if (b > a &&  b > c)
		 		printf("o segundo numero %d é o maior", b);
		 		else if(c > a && c > b)
		 			printf("o terceiro numero %d é maior", c);
		 				else 
		 					puts("os numeros são iguais!!");
	
}

