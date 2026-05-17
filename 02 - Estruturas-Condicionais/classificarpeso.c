/*
	Name: classificadorimc.c
	Author: Daniel Benetti
	Date: 19/03/26 10:51
	Description: 
*/
//importação
#include <stdio.h>

main()
{
	float peso, altura, imc;
	peso=altura=imc= 0;
	
	puts("Classificador de IMC");
	puts("=====================");
	printf("Insira seu peso: ");
	scanf("%f", &peso);
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
		if(imc < 16)
			puts("magreza grau III");
		else if(imc <= 16.9)
				puts("magreza grau II");
			else if(imc <= 18.4)
					puts("magreza grau I");
					else if(imc <= 24.9)
						puts("Eultrofia");
						else if(imc <= 29.9)
							puts("Obesidade moderada (Grau I)");
							else if(imc <= 34.9)
								puts("Obesidade moderada (Grau II)");
								else
									puts("Obesidade moderada (Grau III)");
}
