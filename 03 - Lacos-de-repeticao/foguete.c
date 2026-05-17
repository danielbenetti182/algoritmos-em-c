/*
	Name: LançamentoFoguete.c
	Author: Daniel Benetti
	Date: 02/04/26 11:06
	Description: algoritmo para lançar um foguete
*/

# include <stdio.h>

main(){
	int cont;
	cont = 10;
	do
	{
		printf("%d", cont);
		puts("");
		cont = cont - 1;
	} while(cont > 0);
	printf("FOGO");
}
