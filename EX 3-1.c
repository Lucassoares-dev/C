#include <stdio.h>

int main(){
	
	int i, num1,
	impares=0,
	pares=0;
	
	printf ("\n Digite 30 numeros inteiros.");
	
	for(i=0; i<=30; i++ ){
		printf ("\n Digite o %i.o numero: ", i+1);
		scanf ("%i", &num1);
		
		if (num1 >= 1 && num1 <=10 ){
			printf ("\n O numero esta na Faixa A: entre 1 e 10!\n");}
		else if (num1 >= 11 && num1 <=20){
			printf ("\n O numero esta na Faixa B: entre 11 e 20!\n");}
		
		else if (num1 >=21 && num1 <= 30 || num1 >=41 && num1 <=60 ){
			printf ("\n O numero esta na Faixa C: entre 21 e 30 ou 41 e 60!\n");}
		
		else if (num1 >=31 && num1 <= 40 || num1 >=61 && num1 <=100){
			printf ("\n O numero esta na Faixa D: entre 31 e 40 ou 61 e 100!\n");}
	
		else {
			printf ("\n Valor digitado invalido!\n"); return 0; 
		}
		if ( num1 %2 ==0 ){
			if ( num1 >=61 && num1 <=100){
				printf ("\n O numero e par e esta entre 61 e 100, na Faixa F!\n");
			}
		}
		else {
			printf ("\n O numero esta na Faixa E, e impar!\n");
		}
		
	}
}
