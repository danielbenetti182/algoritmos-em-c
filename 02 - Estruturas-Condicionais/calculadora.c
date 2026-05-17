/*
	Name: calculadora.c
	Author: Daniel Benetti
	Date: 22/03/26 12:38
	Description: Algoritmo que simular calculadora
*/

//importação
#include <stdio.h>
# include <locale.h>

main()
{
	int num1,num2;
	float resul;
	char escolha;
	
		
	setlocale(LC_ALL, "Portuguese");
	puts("Calculadora");
	puts("==================");
	printf("insira a operação: A-Adição S-subtração M-multiplicação D-divisão");
	scanf("%c", &escolha);
	printf("Insira um número: "); scanf("%d", &num1);
	printf("Insira um segundo número: "); scanf("%d", &num2);
		if (escolha == 'A'){
			resul = num1+num2; 
		}
		else if (escolha == 'S'){
			resul = num1-num2; 
		}
			else if(escolha == 'M'){
			resul = num1*num2; 
		}
		
				else if(escolha == 'D'){
			resul = num1/num2; 
		}
		else puts("operação inválida!");
		printf("%f", resul);
				
	
		
	
	
}

