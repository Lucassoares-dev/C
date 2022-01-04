#include <stdio.h>

void main(){
	
	int numeros, entrada;
	int totalmaior = 0;
	int totalmenor = 0;
	int totaligual = 0;
	
	printf ("\n Digite 50 numeros inteiros\n");
	
	for (numeros = 1; numeros <= 50; numeros ++){
		printf ("\n Digite o %i.o numero: ", numeros);
		scanf ("%i", &entrada);
		
		if (entrada > 100){
			printf ("\n O valor digitado e maior que 100!\n");
			totalmaior++;
		}
	
		else if (entrada < 100){
			printf ("\n O valor digitado e menor que 100!\n");
			totalmenor++;
		}
		else {
			printf ("\n O valor digitado e igual a 100!\n");
			totaligual++;
		}
	}
	printf ("\n O total de numeros maiores que 100 sao: %i", totalmaior);
	printf ("\n O total de numeros menores que 100 sao: %i", totalmenor);
	printf ("\n O total de numeros iguais a 100 sao: %i", totaligual);
}
