#include <stdio.h>

int main(){
	

	int i = 0, n, mulher,homem,sexo;
	
	float maioralt = 0, maiorsex = 0, altura, mediaaltmu, menoralt = -1;
	
	for(;i < 5; i++){
		

		printf("Digite sua altura:\n");
		scanf("%f", &altura);
		printf("Digite seu sexo:\nMasculino - 1\nFeminino - 2\n");
		scanf("%d", &sexo);
		
		if(sexo == 1) homem++;
		
		if(sexo == 2){
			mulher++;
			mediaaltmu += altura;
		} 
		
		if(menoralt < 0) menoralt = altura;
		else if(altura < menoralt) menoralt = altura;
		
		if(altura > maioralt){
			maioralt = altura;
			maiorsex = sexo;
		}
	
		
	}
	
	printf("Menor altura do grupo: %.2f\nMedia da altura das mulheres: %.2f\nNumero de machos: %i\nSexo da pessoa mais alta:", menoralt, mediaaltmu/mulher,homem);
	if(maiorsex == 1)printf(" Masculino");
	else printf(" Feminino");

	}

