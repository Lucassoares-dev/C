#include <stdio.h>

void main()
{
	float p, raio;
	
	printf ("\n Digite o raio da circunferencia: ");
	
	scanf ( "%f" , &raio );
	
	p = 6.28 * raio;
	
	printf ("\n O perimentro da circunferencia e: %.3f", p);
	
}
