/*
	Name: classificaridade.c
	Author: Daniel Benetti
	Date: 19/03/26 10:33
	Description: Programa para classificar a idade
				 de uma pessoa.
*/

//importação
# include <stdio.h>

main()
{
	int idade;
	puts("Programa classificador de idade");
	puts("==================");
	printf("insira sua idade: ");
	scanf("%d", &idade);
		if(idade <=0)
			puts("idade invalida!");
		else if(idade <= 12)
				puts("Crianca");
			else if(idade <= 19)
					puts("Adolescente");
				else if(idade <= 60)
					puts("Adulto");
					else
						puts("Idoso");
}
