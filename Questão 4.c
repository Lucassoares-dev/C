#include <stdio.h>

void main ()
{
	float celsius, fahrenheit;
	
	printf (" Digite uma temperatura em fahrenheit:  ");
	
	scanf ("%f", &fahrenheit );
	
	celsius = (fahrenheit - 32) / 1.8; 
	
	printf (" A temperatura em celsius e: %.3f", celsius );
	
}
