#include <stdio.h>

int main(){
	

	int i = 0, n;
	float v1,v2;
	float x, maior, menor;
	
	for(;;){
		
	printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
	scanf("%i", &n);
	
	if(n == 5) return;
		
	printf("Valor 1:\n");
	scanf("%f", &v1);
	
	printf("Valor 2:\n");
	scanf("%f", &v2);
	
	if(n == 1) printf("Resultado: %.2f\n\n" ,v1+v2);
	if(n == 2) printf("Resultado: %.2f\n\n" ,v1 - v2);
	if(n == 3) printf("Resultado: %.2f\n\n", v1 * v2);
	if(n == 4) printf("Resultado: %.2f\n\n" ,v1/v2);

	
	
	}

	}

