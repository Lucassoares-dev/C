#include <stdio.h>

int main(){
	

	int i = 0;
	float m,m2,n;
	
	printf("Notas dos alunos do modulo 1:\n");
	
	for(; i < 5; i++){
		
		printf("Numero %i:\n", i+1);
		scanf("%f", &n);
		
		while(n > 10 || n < 0){
			printf("A nota deve estar entre 0 e 10\n");
			scanf("%f", &n);
		}
		m+=n;

	}
	
	printf("Notas dos alunos do modulo 2:\n");

	
	for(i = 0; i < 5; i++){
		
		printf("Numero %i:\n", i+1);
		
		scanf("%f", &n);
		while(n > 10 || n < 0){
			printf("A nota deve estar entre 0 e 10\n");
			scanf("%f", &n);
		}
		m2+=n;
		
		
	}
	
	printf("Media mod1: %.2f\nMedia mod2: %.2f", m/5, m2/5);


	}

