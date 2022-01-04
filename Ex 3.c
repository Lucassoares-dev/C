#include <stdio.h>

void main ()
{
	float prova1 , prova2, media, falta;
	
	printf ("\n Digite a nota da primeira prova do aluno: ");
	scanf ("%f", &prova1 );
	
	printf ("\n Digite a nota da segunda prova do aluno: ");
	scanf ("%f", &prova2 );
	
	media = ( prova1 + prova2 ) / 2;
	falta = 5 - media;
	
	if ( media >= 5 ){
		printf ("\n Aprovado!");
	}
	
	if ( media < 5 ){
		printf ("\n Faltaram %.2f pontos ", falta );
	}
	
}
