#include <stdio.h>

int main(){
	

	int input, i = 0, x = 0;
	
	scanf("%i", &input);
	while(x < input){
	
	i = input-x;
	
	for(; i < input+1; i++){
		printf("*");
	}
	
	printf("\n");	
	x++;
	}
	


	}

