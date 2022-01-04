#include <stdio.h>

void main(){
	
	float n1, n2, n3, n4, soma, ma, div;
	
	printf ("\n Digite o primeiro numero: ");
	scanf ("%f", &n1);
	
	printf ("\n Digite o segundo numero: ");
	scanf ("%f", &n2);
	
	printf ("\n Digite o terceiro numero: ");
	scanf ("%f", &n3);
	
	printf ("\n Digite o quarto numero: ");
	scanf ("%f", &n4);
	
	soma = n1 + n2 + n3 + n4;
	printf ("\n A soma dos numeros sao: %.2f ", soma);
	
	ma = ( n1 + n2 + n3 + n4)/4;
	printf ("\n A media aritmetica e: %.2f", ma);
	
	div = ( n1 + n2 )/ ( n3+ n4 );
	printf ("\n A divisao dos dois primeiros pelos dois ultimos e: %.2f", div);
	
}
