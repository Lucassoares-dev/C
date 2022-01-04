#include <stdio.h>
#include <math.h>

int main(){
	

	int input, i = 0, x = 0, space = 0;
	
	scanf("%i", &input);
	input *=2;
	while(x < input){
	
	i = x/2;
	
	for(; i < input/2; i++){
		printf(" ");
	}
	
	i = input-x;

	for(; i < input+1; i++){
		printf("*");
	}
	
	printf("\n");	
	x+=2;
	}
	


	}

