#include <stdio.h>

void main(){
	
	int i = 0, q = 0, z = 0;
	float v;
	
	while(i < 10){
		
		scanf("%f", &v);
		if(v > 0){
			q++;
		}
		if(v < 0){
			z++;
		}
			i++;
	}
	
	printf("%i valores positivos\n%i valores negativos\n", q, z);
	
	
	
}
