/*
	Name: maiormenor.c
	Author: Daniel Benetti
	Date: 19/03/26 09:55
	Description: programa para apontar qual dos
	dois números lidos é o maior
*/

//importação
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	int a,b;
	a = b = 0;
	puts("programa para determinar qual o maior numero");
	puts("=============================================");
	printf("digite um numero: "); scanf("%d", &a);
	printf("digite o segundo numero: "); scanf("%i", &b);
		if (a > b)
			printf("O %d e o maior número", a);
		else if(b > a)
			printf("O %d e o maior número lido!", b);
			else
				puts("Os dois numeros são iguais!");
	
}
