#include <stdio.h>

int main(){
	

	int i = 0;
	float n, media;

	
	while(i < 10){
		
		scanf("%f", &n);
		media += n;
		i++;
	}
	
	printf("Media final:%.1f", media/10);
	return 0;
}
