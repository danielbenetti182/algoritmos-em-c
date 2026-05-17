/*
	Name: IMC.c
	Author: Daniel Benetti
	Date: 05/03/26 12:23
	Description: Progama para calcular o IMC
*/

//Sessão de importação
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	float real, altura, peso, imc;
	real = altura = peso = imc = 0;
	
	puts("Calculo de IMC");
	puts("==============");
	printf("insira sua altura: ");
	scanf("%f", &altura);
	printf("insira seu peso: ");
	scanf("%f", &peso);
	imc = peso/(altura*altura);
	printf("seu IMC é: %.3f", imc);
	
	
	
	}

