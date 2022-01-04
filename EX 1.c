#include <stdio.h>

void main(){

	int i, vetorA[1], vetorB[1], aux=0;	  
 
	for(i=0; i<1; i++){
		printf("\n\n Informe o %i%c valor do Vetor A : ", i+1, 167);  
   		scanf("%i", &vetorA[i]);  
	}
	for(i=0; i<1; i++){
   		printf("\n\n Informe o %i%c valor do Vetor B : ", i+1, 167);  
   		scanf("%i", &vetorB[i]); 
	}
	for(i=0; i<1; i++){	   
   		aux += vetorA[i] * vetorB[i];
	}

   printf("\n\n O produto escalar entre os vetores = %i\n\n", aux);	  

}
