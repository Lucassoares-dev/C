#include <stdio.h>

void main()
{
	float nume, deno, divi;
	
	printf ("\n Digite um numerador: ");
	scanf ("%f", &nume);
	
	printf ("\n Digite um denominador: ");
	scanf ("%f", &deno);
	
	divi = nume / deno ;
	
	if ( deno > 0 ){
		printf (" \n A divisao sera: %.2f ", divi);
	}
	
	else 
		{
			printf ("\n Nao e possivel dividir por zero!");
		}
}
