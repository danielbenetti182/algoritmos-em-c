/*
	Name: Soma.c
	Author: Daniel Benetti
	Date: 05/03/26 10:11
	Description: Programa para somar dois números inteiros
*/

# include <stdio.h>    //STandarD Input Output
# include <locale.h>
//variaveis
int a, b, soma; //variaveis inteiras


main()
{
	setlocale(LC_ALL, "Portuguese");
	a = 0; b = 0; soma = 0;
	puts("Programa para somar dois numeros");
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	soma = a + b;
	printf("A soma de %d com %d é: %d", a,b,soma);
}
