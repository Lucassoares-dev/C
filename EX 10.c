#include <stdio.h>

int main(){
	
	int st, i=0, n=0;
	float A[i], soma, media , maior=0, vezes=0;
	
	do{
		printf ("\n Informe o numero: ");
		scanf ("%f", &A[i]);
		
		st =0;
		
		if ( i == 0 ){
			maior = A[i];
		}
		vezes++;
		soma += A[i];
		media = soma / vezes;
		
		if ( A[i] > maior ){
			maior = A[i];
		}
		while ( st != 1 && st != 2 ){
			printf ("\n Deseja inserir outro numero? \n\t1- Sim \n\t2- Nao e encerrar o programa: ");
			scanf ("%i", &st);
			
			if ( st != 1 && st != 2){
				printf ("\n Numero invalido!");
			}
		}
		i++;
		}
	while ( st != 2);
	printf ("\n Maior numero armazenado no vetor: %.1f", maior);
	printf ("\n Media dos numeros armazenados no vetor: %.1f\n", media);
}
