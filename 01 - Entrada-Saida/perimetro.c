/*
	Name: perimetro.c
	Author: Daniel benetti
	Date: 05/03/26 11:50
	Description: Programa para calcular o perimetro
*/

//Sessão de importação
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	float raio, perimetro, pi;
	raio = perimetro = 0; pi = 3.1416;
	puts("Programa para calcular o perimetro");
	puts("==================================");
	printf("insira o raio: ");
	scanf("%f", &raio);
	perimetro = 2*pi*raio;
	printf("O perimetro da circunferencia cujo o raio é %f é: %.3f", raio, perimetro);
}
