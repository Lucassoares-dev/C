#include <stdio.h>

void main()
{
	float tc1, tc2, pc1, pc2, nf1, nf2;
	
	printf ("\n Digite as duas notas do aluno na avaliacao teorica: ");
	
	scanf ("%f", &tc1 );
	scanf ("%f", &tc2 );
	
	printf ("\n Digite as duas notas do aluno na avaliacao pratica: ");
	
	scanf ("%f", &pc1 );
	scanf ("%f", &pc2 );
	
	nf1 = 0.60 * (tc1 + tc2 ) + (pc1 + pc2 ) * 0.40 ;
	nf2 = nf1 / 2 ;
	
	printf ("\n A nota final do aluno e: %.2f", nf2 );	
	
}
