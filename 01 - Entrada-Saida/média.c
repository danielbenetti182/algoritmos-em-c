/*
	Name: média.c
	Author: Daniel Benetti
	Date: 05/03/26 12:04
	Description: Programa que calcula a média de 4 notas
*/

//Sessão de importação
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media, soma;
	char aluno;
	n1 = n2 = n3 = n4 = media = soma = 0;

	
	puts("Programa que calcula a média");
	puts("============================");

	printf("insira a primeira nota: ");
	scanf("%f", &n1);
	printf("insira a segunda nota: ");
	scanf("%f", &n2);
	printf("insira a terceira nota: ");
	scanf("%f", &n3);
	printf("insira a quarta nota: ");
	scanf("%f", &n4);
	soma = n1 + n2 + n3 + n4;
	media = soma/4;
	printf("a média do aluno é: %.3f", media);
	printf("/nFim do programa");
	
}
