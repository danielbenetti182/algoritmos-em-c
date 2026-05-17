/*
	Name: leitortriangulo.cpp
	Author: Daniel Benetti
	Date: 22/03/26 12:38
	Description: Algoritmo que classifica triangulos
*/

//importação
#include <stdio.h>
# include <locale.h>

main()
{
	float lado1, lado2, lado3;
	
	setlocale(LC_ALL, "Portuguese");
	puts("Classificador de triangulo");
	puts("==================");
	printf("Insira o tamanho do primeiro lado: ");
	scanf("%f", &lado1);
	printf("Segundo lado: "); scanf("%f", &lado2);
	printf("Terceiro lado: "); scanf("%f", &lado3);
		if (lado1 == lado2 && lado1 == lado3){
		printf("Triangulo Equilátero");
	}
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		printf("Triangulo Isósceles");
	}
		else printf("Triangulo Escaleno");
		
}
		

//Equilátero: Três lados iguais e três ângulos iguais (60° cada).
//Isósceles: Dois lados congruentes (iguais) e dois ângulos da base iguais. 
//Escaleno: Três lados e três ângulos diferentes entre si.
