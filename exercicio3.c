#include <stdio.h>

int main(){
	

	int i = 0, x = 0;
	float n, media;

	printf("Digite quantos numeros você deseja digitar para fazer a media deles:\n");
	scanf("%i", &x);
		
	while(i < x){
		
		scanf("%f", &n);
		media += n;
		i++;
	}
	
	printf("Media final:%.1f", media/x);
	return 0;
}
