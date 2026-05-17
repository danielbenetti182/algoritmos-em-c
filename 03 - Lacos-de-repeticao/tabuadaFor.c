/*
	Name: TABUADA.cpp
	Author: Daniel Benetti
	Date: 02/04/26 11:43
	Description: programa que calcula a tabuada
*/

# include <stdio.h>

main()
{

	int num, cont, resul;
	num = resul = 0;
	cont = 1;
	puts("digite o numero a ser multiplicado: ");
	scanf("%d", &num);
	for(cont; cont <=10; cont = cont+1){
		resul = num * cont;
		printf("%d x %d = %d", num, cont, resul);
		puts("");
	}
	
}

