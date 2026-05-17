/*
	Name: leitorsexo.c
	Author: Daniel Benetti
	Date: 19/03/26 11:36
	Description: Programa que define o sexo de uma pessoa
*/

//importação
# include <stdio.h>

main()
{
	char sexo;
	sexo = ' ';
	printf("Qual seu sexo M/F?");
	scanf("%c", &sexo);
		if(sexo == 'M' || sexo == 'm')
		printf("Masculino");
		else if(sexo == 'F' || sexo == 'f')
			printf("Feminino");
			else
				puts("Insira um dado valido");
	
	
}

