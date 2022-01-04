#include <stdio.h>

void main(){
	
	int vetA[12], i=0, par=0, impar=0, pard;

	float vetB[12];
	
	while (i < 12){
		printf ("\n\n Informe o %io valor: ", i+1);
		scanf ("%i", &vetA[i]);
		if ( vetA[i] %2 == 0){
			vetB[i] = vetA[i] /2;
		}
		else {
			vetB[i] =vetA[i] * 3;
		}
	 	printf("vetB[%i] = %.1f\n", i+1, vetB[i]);
	 	i++;
	}
}

