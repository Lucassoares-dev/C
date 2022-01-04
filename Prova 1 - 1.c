#include <stdio.h>

void main(){
	
	float valor, quant, percent, tv, comiss;
	
	printf ("\n Digite o valor do produto: ");
	scanf ("%f", &valor);
	
	printf ("\n Digite a quantidade do produto vendido: ");
	scanf ("%f", &quant);

	tv = valor * quant;
	printf (" O valor total do produto foi de: %.2f", tv);
	
	printf ("\n\n Digite o percentual de comissao do vendedor: ");
	scanf ("%f", &percent);
	
	comiss = tv * (percent / 100);	
	printf (" A comissao foi de %.2f", comiss);
}
