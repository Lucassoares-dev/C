#include <stdio.h>

int main(){

    int i=0, par=0, impar = 1, y, q;
    float parsoma=0;

    scanf ("\n%i", &q);
    int vetA[q];
    
    while (i < q){ 
        printf("\n\n Informe o %io valor: ", i+1);
        scanf("%i", &vetA[i]);
         if ( (i+1) % 2 == 0 ){
            par++;
            parsoma += vetA[i];
           }
        else {
            y++;
            impar *= vetA[i];
           }
           i++;
		   } 
    printf ("\nMedia dos numeros pares: %.2f\n", parsoma / par);
    printf ("\nProduto dos numeros impares: %i", impar);
}
