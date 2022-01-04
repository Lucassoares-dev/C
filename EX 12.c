#include <stdio.h>

int main(){
	
	float entrada, total;
	int i = 0, te, m = 0;
	
	int in = 0, e = 0, id = 0;
	
	printf("Digite o valor da entrada\n");
	scanf("%f", &entrada);

	
	for(; i < 200; i++){
		
		printf("Digite qual tipo de entrada, ou se deseja iniciar a sessao:\n1 - Integral\n2 - Estudante\n3 - Idoso\n4 - iniciar sessao\n");
		scanf("%i", &te);
		
		if(te == 2 || te == 3) total += entrada/2;
		else if(te == 1) total += entrada;
		
		if(te == 1) in++;
		else if(te == 2) e++;
		else if(te == 3) id++;
		
		if(te != 4 && m <= 200) m++;
		else break;
		
		
		
	}
	
	 printf("Total arrecadado: %.2f\nValor média por pessoa: %.2f\nQuantidade por tipo:\nEstudantes - %i\nIntegral - %i\nIdosos - %i", total, total/m, e,in,id);
	
}
