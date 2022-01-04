#include <stdio.h>

void main ()
{
	float n1, n2, div, multi;
	
	printf ("\n Digite a base e altura do triangulo: ");
	
	scanf ("%f", &n1 );
	
	scanf ("%f", &n2 );
	
	multi = n1 * n2;
	
	div = multi / 2;
	
	printf (" A area do triangulo e: %.2f", div );
	
	
}
