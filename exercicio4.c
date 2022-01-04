#include <stdio.h>

int main(){
	

	int i = 0;
	float x, maior, menor;
	
	scanf("%f", &x);
	
	maior = x;
	menor = x;
	
	while(i < 9){
		
		scanf("%f", &x);
		
		if(x > maior){
			maior = x;
		}
		
		if(x < menor){
			menor = x;
		}

		
		i++;
	}
	
	printf("Maior = %.1f\nMenor = %.1f", maior, menor);
	}

