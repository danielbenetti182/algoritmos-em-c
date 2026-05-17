/*
	Name: contador.c
	Author: Daniel Benetti
	Date: 02/04/26 11:21
	Description: contador usando for while
*/

# include <stdio.h>

main(){
	int num, limNegativo;
	
	puts("insira um numero: ");
	scanf("%d", &num);
	limNegativo = num * -1;
	while(num >=limNegativo){
		
	
		printf("%d", num);
	
		puts("");
		num = num - 1;}
	}
