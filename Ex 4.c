#include <stdio.h>

void main()
{
	float num1, num2, num3;
	
	printf ("\n Digite tres numeros: ");
	scanf ("%f", &num1);
	scanf ("%f", &num2);
	scanf ("%f", &num3);
	
	if ( num1 == num2 ){
		printf ("\n Existem numeros repetidos: %.1f", num1, num2);
	}
	else if ( num2 == num3 ){
		printf ("\n Existem numeros repetidos: %.1f", num2, num3);
	}
	else if ( num1 == num3 ){
		printf ("\n Existem numeros repetidos: %.1f", num1, num3);
	}
}
