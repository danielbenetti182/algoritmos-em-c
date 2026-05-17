/*
	Name: Celsius.c
	Author: Daniel Benetti
	Date: 16/03/26 11:01
	Description: Algoritmo que mostra conversão de celsius para
	fahreinheit
*/

# include <stdio.h>    //STandarD Input Output
# include <locale.h>

//variaveis

float Ce, Fa;

main()
{
	setlocale(LC_ALL, "Portuguese");
	Ce=0; Fa=0;
	puts("Conversor de graus Celsius para Fahrenheit");
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &Ce);
	Fa = (Ce*1.8)+32;
	printf("%.1f em Celsius equivale a %.1f Fahrenheit", Ce, Fa);
}
