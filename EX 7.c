#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");

    int i=0, j=0, n=0, aux=0, A[n];

    printf("Digite a quantidade de números: ");
    scanf("%i", &n);

    for( i = 0 ; i < n ; i++ )
    {
        printf("Digite o %iº valor: ", i+1);
        scanf("%i", &A[i]);
    }

    for( i = 0 ; i < n ; i++ )
    {
        for( j = i+1 ; j < n ; j++ )
        {
            if(A[i] > A[j]){
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    printf("Valores do vetor em ordem crescente: \n");

    for( i = 0 ; i < n ; i++ )
    {
        printf("%i\n", A[i]);
    }
    return 0;
}
