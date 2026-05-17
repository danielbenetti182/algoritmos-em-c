/*
	Name: conversormoeda.c
	Author: Daniel Benetti
	Date: 22/03/26 12:38
	Description: Algoritmo que converte real para Dolar, Euro ou Iene
*/

//importação
#include <stdio.h>
# include <locale.h>

main()
{
	float real, dol, eur, ien, con;
	int escolha;
	real=0;
	escolha=0;
	con= 0; 
	dol= 5.31; eur= 6.06; ien= 0.033;
	
	setlocale(LC_ALL, "Portuguese");
	puts("Conversor de real!");
	puts("==================");
	printf("insira o valor em reais: ");
	scanf("%f", &real);
	printf("insira a opção da moeda (1.dolar 2.euro ou 3.iene): ");
	scanf("%d", &escolha);
		if (escolha == 1){
			con = real/dol; 
			printf("R$ %.2f equivale a U$ %.2f", real, con); 
		}
		else if (escolha == 2){
			con = real/eur; 
			printf("R$ %.2f equivale a € %.2f", real, con);
	}
			else if(escolha == 3){
				con = real/ien; 
				printf("R$ %.2f equivale a ¥ %.2f", real, con);
			}
				else puts("insira opção válida!");
	
		
	
	
}

