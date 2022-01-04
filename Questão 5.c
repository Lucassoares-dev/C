#include <stdio.h>

void main()
{
	float ds, t, vm;
	
	printf ("\nDigite a distancia percorrida pelo objeto em metros: ");
	
	scanf ("%f", &ds );
	
	printf("\nDigite o tempo percorrido em segundos do objeto: ");
	
	scanf ("%f" , &t);
	
	vm = ds / t;
	
	printf ("\n\nA velocidade media do objeto e: %.2f ", vm );	
	
}
