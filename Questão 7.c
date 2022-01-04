#include <stdio.h>

void main()
{
	float hx, hn, sl;
	
	printf ("\n Digite o numero de horas extras: ");
	
	scanf ("%f", &hx );
	
	printf ("\n Digite o numero de horas normais: ");
	
	scanf ("%f", &hn );
	
	sl = ( hx * 15.00 ) + ( hn * 10.00 );
	
	printf ("\n O seu salario desse mes deve ser de: %.2f", sl );
	
}
