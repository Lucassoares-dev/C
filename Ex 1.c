#include <stdio.h>

void main()
{
	float numero;
	
	printf (" Digite um numero: ");
	scanf ("%f", &numero );
	
	if ( numero < 0 ){
		printf ("\n Negativo");
	}
	else{
		printf ("\n Nao negativo");
	}
	
	
}
