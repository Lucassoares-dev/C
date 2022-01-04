#include <stdio.h>

int main(){
	

	int i = 0,x,n = 0,ma;
	float m;
	
	
	for(;;){
		
		printf("Adicionar numero = 1\nFinalizar = 2\n");
		scanf("%i", &i);
		
		if(i == 2){
			printf("Maior num: %i\nmedia: %.2f\n", ma, m/n);
			return;	
		}
		else{
			
			scanf("%i", &x);
			n++;
			m +=x;
			
			if(x > ma) ma = x;
			
		}
		
		
		
	}

	}

