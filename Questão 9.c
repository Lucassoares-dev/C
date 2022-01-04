#include <stdio.h>

void main()
{
	float sb, sl;
	
	printf ("\n Digite seu salario bruto: ");
	
	scanf ("%f", &sb );
	
	sl = sb - ( sb * 0.37 );
	
	printf ("\n Seu salario com descontos e: %.2f", sl );
	
}
