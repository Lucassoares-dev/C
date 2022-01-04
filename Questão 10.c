#include <stdio.h>

void main()
{
	float nasc, dt; 
	
	printf ("\n Digite a sua data de nascimento: ");
	
	scanf ("%f", &nasc );
	
	dt = 365 * ( 2019 - nasc ) ;
	
	printf ("\n Os dias totais de vida que voce tem: %.0f ", dt );
	
}
