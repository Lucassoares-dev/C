#include <stdio.h>

void main (){
	
	float vp, quant, vd, tb, percen, tt;  
	
	printf ("\nDigite o valor do produto:  ");
	scanf ("%f", &vp);
	
	printf ("\nDigite a quantidade: ");
	scanf ("%f", &quant);
	
	printf ("\nDigite o valor de desconto em reais: ");
	scanf ("%f", &vd);
	
	tb = vp * quant;
	printf ("\nTotal da Venda bruta foi de: %.2f\n", tb);
	
	percen = (vd * 100)/tb;
	
	tt = tb - vd;
	
	if (percen >= 10){
		printf ("\nErro! Valor do desconto invalido!");
	}
	else {
		printf ("\nO valor total sera de: %.2f", tt);
		printf ("\nO desconto em porcentagem foi de: %.2f", percen);
}
}
