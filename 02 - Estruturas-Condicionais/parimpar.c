/*
	Name: parimpar.c
	Author: Daniel Benetti
	Date: 19/03/26 10:17
	Description: Programa para determinar se um numero
				 fornecido pelo usuári é PAR ou ÍMPAR
*/

//importação
# include<stdio.h>

main()
{
	int num, quo, resto;
	num = quo = resto = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	quo = num/2;
	resto = num - (quo * 2);
		if(resto == 0)
			puts("O numero eh PAR");
		else
			puts("IMPAR");
}
