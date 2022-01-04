#include <stdio.h>

void main (){
	
	float v1, v2, v3, v4, ma, mp;
	
	printf ("\nDigite o primeiro valor: ");
	scanf ("%f", &v1);
	
	printf ("\nDigite o segundo valor: ");
	scanf ("%f", &v2);
	
	printf ("\nDigite o terceiro valor: ");
	scanf ("%f", &v3);
	
	printf ("\nDigite o quarto valor: ");
	scanf ("%f", &v4);
	
	ma = (v1 + v2 + v3 + v4) / 4;
	printf ("\nSua media aritmetica sera: %.2f ", ma);
	
	mp = (0.10 * v1 ) + (0.30 * v2) + ( 0.40 * v3) + ( 0.20 * v4);
	printf ("\nSua media ponderada sera: %.2f ", mp);
	
}
