#include <stdio.h>

void main (){
	
	int quant;
	
	printf ("\n Digite a quantidade total de pecas do produto: ");
	scanf ("%i", &quant);
	
	if ( quant > 0 && quant < 10 ){
		printf ("\n Baixa complexidade tipo 1!");
	}
	else if ( quant >= 10 && quant < 20 ){
		printf ("\n Baixa complexidade tipo 2!");
	}
	else if ( quant >= 20 && quant < 100){
		printf ("\n Media complexidade!");
	}
	else if ( quant >= 100){
		printf ("\n Alta complexidade!");
	}
	else {
		printf ("\n Quantidade invalida!");
	}
}
