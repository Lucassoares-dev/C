#include <stdio.h> 

int main(){ 

    int v[10],v1[10],v2[10], i,contP = 0, contI = 0; 

    printf ("\tDigite 10 valores inteiros\n\n"); 

    for (i=0; i < 10; i++){ 
        printf ("\n Numero %i: ", i + 1); 
        scanf ("%i", &v[i]); 
    }
    for(i=0; i < 10; i++)
    {
        if(v[i] % 2 == 0){ 
        v1[contP] = v[i]; 
        contP++; 
        }
        if(v[i] % 2 != 0){ 
        v2[contI] = v[i]; 
        contI++; 
        }
    }
    printf("\nOs numeros pares sao:\n"); 

    for(i = 0; i < contP; i++){
        printf("%d\n", v1[i]); 
    } 
    printf("\nOs numeros impares sao:\n"); 
    
    for(i = 0; i < contI; i++){
        printf("%i\n", v2[i]); 
    }
}
