/*
	Name: área.c
	Author: Daniel Benetti
	Date: 05/03/26 11:25
	Description: Progama que calcula a área de um terreno
*/

//Sessão de importação
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float frente, fundo, area; //variaveis reais
	frente = fundo = area = 0;
	
	puts("Progama para calcular a área de um terreno");
	puts("==========================================");
	printf("Digite a medida da frente: ");
	scanf("%f", &frente);
	printf ("Digite a medida da frente: ");
	scanf("%f", &fundo);
	area = frente * fundo;
	printf("A área do terreno é %.3f", area);
} //fim do programa
