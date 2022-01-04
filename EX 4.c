#include <stdio.h>
#include <time.h>

void main(){

    int a[6];
    int i = 0;

    for(; i < 6; i++) a[i] = (rand() % 59) + 1;

    int b[10];
    int j = 0, x = 0;

    for(i = 0; i < 10; i++){
        printf("Aposta numero %i\n", i+1);
        scanf("%i", &b[i]);
    }
    for(; j < 10 ;  j++){
        for(i = 0; i < 6; i++){
            if(a[i] == b[j] && b[j] != 0){
                x++;
            }
        }
    }
    if(x < 4){
		printf("Voce não ganho nada, fez só %i pontos", x);}
    else if( x == 4){
        printf("Voce fez %i pontos, voce fez uma quadra", x);
    }
	else if(x == 4){
        printf("Voce fez %i pontos, voce fez uma quina", x);
    }
	else{
        printf("Voce fez %i pontos, voce fez uma sena, parabens!", x);
    }
}
