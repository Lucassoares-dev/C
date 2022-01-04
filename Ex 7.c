#include <stdio.h>

void main()
{
	float mes = 50, min1, total;
	
	printf ("\n Digite quantos minutos foram gastos a mais nesse mes: ");
	scanf ("%f", &min1 );
	
	total = mes + (min1 * 1.50 ) ;
	
	if ( min1 > 0 ){
		printf ("\n A conta desse mes sera de: %.2f", total );
	}
	
	else {
		printf (" \n Esse e o valor da conta esse mes: %.2f ", mes );
		
	}
}
