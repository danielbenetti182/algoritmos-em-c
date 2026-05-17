/*
	Name: tabelaidade.c
	Author: Daniel benetti
	Date: 05/03/26 11:50
	Description: Programa para mostrar faixa etária
*/

//Sessão de importação
# include <stdio.h>
# include <locale.h>

//Variaveis
int idade;

main()
{
	idade = 0;
	setlocale (LC_ALL, "Portuguese");
	puts("Programa para calcular a idade");
	puts("==================================");
	printf("Insir idade: ");
	scanf("%i", &idade);
	if (idade <= 12)
	printf("criança");
	else if (idade <= 19)
	printf("adolescente");
	else if (idade <= 60)
	printf("adulto");
	else printf("idoso");

}
