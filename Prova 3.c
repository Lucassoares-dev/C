#include <stdio.h>

void main(){
	
	int num, i;
	
	printf ("\n Digite 100 numeros inteiros!\n ");
	
	for (i=0; i<=100; i++){
		printf ("\n Digite o %i.o numero: ", i+1);
		scanf ("%i", &num);
		if ( num >= 1 && num <=9){
			printf (" O numero possui 1 digito!\n");}
			
		else if ( num >=10 && num <=99){
			printf (" O numero possui 2 digitos!\n");}
				
		else if ( num >=100 && num <= 999 ){
			printf (" O numero possui 3 digitos!\n");}
			
		else if ( num >= 1000 && num <= 9999){
			printf (" O numero possui 4 digitos!\n");}
			
		else {
			if ( num ==0){
				printf (" Numero nulo!\n");}
			else{
				printf (" Numero invalido!\n");}
			}
}
}
