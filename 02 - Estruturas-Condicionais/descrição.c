/*
	Name: dadospessoa.c
	Author: Daniel Benetti
	Date: 19/03/26 11:51
	Description: Programa para descrever pessoa
*/

//importação

# include <stdio.h>
# include <locale.h>


main()
{

	float altura;
	char sex, trab, *tam, *sexo, *simnao;
	
	altura = 0;

	
	printf("Insira sua altura: ");
	scanf("%f", &altura);
			if (altura < 1.60){
			tam ="baixo";}
			else if(altura <= 1.80){
					tam = "mediano";
					}
				else
					tam =  "alto";
	printf("Insira seu sexo M/F: ");
	scanf("%c ", &sex);
			if(sex = 'M' || sex == 'm')
			sexo = "Homem";
			else if(sex = 'F' || sex =='f')
			 sexo = "Mulher";
	printf("você está empregado? s/n: ");
	scanf("%c ", &trab);
			if(trab = 'S' || trab == 's')
			simnao = "e trabalha";
			else if(trab = 'N' || trab == 'n');
			simnao = "não trabalha";
	printf("voce eh %s e %s e %s", sexo, tam, simnao);
			
	

		
	
	
				
			
		

	
}


