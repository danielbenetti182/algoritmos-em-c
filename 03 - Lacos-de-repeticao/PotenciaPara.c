/*
	Name: PotenciaPara
	Author: Daniel Benetti
	Date: 02/04/26 11:59
	Description: Potenciação com laço repita até
*/

//import
# include <stdio.h>

main(){
	int base, exp, cont;
	float pot;
	
	base = exp = 0;
	pot = 1.0;
	
	puts("Insira Base: ");
	scanf("%d", &base);
	puts("Insira expoente: "); 
	scanf("%d", &exp);
	for(cont; cont < exp; cont++){
		pot = pot * base;
	}
	printf("%d elevado a %d eh %.2f", base, exp, pot);
}
