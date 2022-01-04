#include <stdio.h>

void main()
{
	float n1, n2;
	
	printf ("\n Digite um numero: ");
	scanf ("%f", &n1);
	
	printf ("\n Digite outro numero: ");
	scanf ("%f", &n2);
	
	if ( n1 > n2 ) {
		printf ("\n O maior entre eles e: %.1f ", n1 );
	}
	
	else{
		printf ("\n O maior entre eles e: %.1f ", n2);
	}
	
}
