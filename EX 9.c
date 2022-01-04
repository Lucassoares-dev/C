#include <stdio.h>

int main(){
	
	int i , oper;
	float A1, B2, A[100];
	
	for ( i=0 ; i < 3; i++){
	printf ("\n  Digite um valor: ");
	scanf ("%f", &A1);
	
	printf ("\n  Digite um outro valor: ");
	scanf ("%f", &B2);
	
	printf ("\n Escolha uma operacao: \n\t1 - Soma \n\t2 - Subtrair \n\t3 - Multiplicar \n\t4- Divisao \n\t5 - Sair: ");
	scanf ("%i", &oper);
	
	if ( oper == 1 ){
		A[i]= A1 + B2;
	}
	else if ( oper == 2){
		A[i]= A1 - B2;
	}
	else if ( oper == 3){
		A[i]= A1 * B2;
	}
	else if ( oper == 4){
		A[i]= A1 / B2;
	}
	else{
		break;
	}
	}
	for (i=0 ; i < 3; i++){
		printf ("%.2f\n", A[i]);
	}
	
}
