#include <stdio.h>

void main (){
	float alt, peso, ideal;
	int sex;
	
	printf ("\n Digite o sexo: \n\t1-Masculino \n\t2-Feminino: ");
	scanf ("%i", &sex);
	
	printf ("\n Digite a altura: ");
	scanf ("%f", &alt);
	
	printf ("\n Digite o peso: ");
	scanf ("%f", &peso);
	
	if ( sex == 1 ){
		ideal = (72.7 * alt)- 62;
		printf ("\n O seu peso ideal sera: %.1f", ideal);
	}
	else if ( sex == 2){
		ideal= (62.7 * alt)- 48.7;
		printf ("\n O seu peso ideal sera: %.1f", ideal);
	}
	else {
		printf ("\n Operacao invalida!");
	}
	if (peso < ideal) {
		printf ("\n Voce esta abaixo do peso ideal.");
	}
	else if ( peso == ideal) {
		printf ("\n Voce esta no peso ideal.");
	}	
	else {
		printf ("\n Voce esta acima do peso ideal.");
	}
}

