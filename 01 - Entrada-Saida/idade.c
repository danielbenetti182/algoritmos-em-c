/*
	Name: idade.c
	Author: Daniel benetti
	Date: 05/03/26 11:50
	Description: Programa para calcular quantos dias você já viveu
*/

//Sessão de importação
# include <stdio.h>
# include <locale.h>

//Variaveis
int anos, meses, dias, total;

main()
{
	anos = meses = dias = total = 0;
	setlocale (LC_ALL, "Portuguese");
	puts("Programa para calcular a idade total em dias");
	puts("==================================");
	printf("Insira anos: ");
	scanf("%i", &anos);
	printf("Insira meses: ");
	scanf("%i", &meses);
	printf("Insira dias: ");
	scanf("%i", &dias);
	total = (anos * 365) + (meses * 30) + dias;
	printf("a pessoa que tem %i anos, %i meses e %i dias já viveu %i dias.", anos, meses, dias, total);
}
