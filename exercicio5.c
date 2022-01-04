#include <stdio.h>

int main(){
	

	int i = 0, n, filhos;
	
	float x, maiorsal = 0, salario, mediasal, mediafilho;
	
	for(;i < 15; i++){
		
		printf("Digite quantos filhos voce tem:\n");
		scanf("%d", &filhos);
		printf("Digite qual seu salario:\n");
		scanf("%f", &salario);
		
		if(salario > maiorsal) maiorsal = salario;
		
		mediasal += salario;
		mediafilho += filhos;
		
		if(salario > 1000) x++;
		
	}
	
	printf("Media Salario: %.2f\nMedia num filhos: %.1f\nMaior Salario: %.2f\nPercentual de pessoas que ganham mais de 1000 reais:%.2f%%", mediasal/15, mediafilho/15,maiorsal,15/x);

	}

