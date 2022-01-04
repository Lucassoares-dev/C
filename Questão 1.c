#include <stdio.h>

void main ()
{
	float n1, n2, soma, div;
	
	printf ("\n Digite dois numeros reais:\n ");
	
	scanf ("%f", &n1 );
	
	scanf ("%f", &n2 );
	
	soma = n1 + n2;
	
	div = soma / 2;
	
	printf ("\n A media aritmetica e:\n %.2f", div );
		
}
