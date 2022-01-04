#include <stdio.h>

void main()
{
	float prova1 , prova2, media;
	
	printf ("\n Digite a nota da primeira prova do aluno: ");
	scanf ("%f", &prova1 );
	
	printf ("\n Digite a nota da segunda prova do aluno: ");
	scanf ("%f", &prova2 );
	
	media = ( prova1 + prova2 ) / 2;
	
	if ( media >= 5 ){
		printf ("\n Aprovado!");
	}
	
	else{
		printf ("\n Reprovado!");
	}
	
}
