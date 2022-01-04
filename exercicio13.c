#include <stdio.h>

int main(){
	
	int a,b,c,d,e,v;
	float tot;
	
	for(;;){
		
		printf("Digite 1 para jose\nDigite 2 para maria\nDigite 3 para joao\nDigite 4 para voto nulo\nDigite 5 para nao votar\n");
		
		scanf("%i",&v);
		
		if(v == 0) break;
		
		switch(v){
			case 1:
			 a++;
			break;
			case 2:
			b++;
			break;
			case 3:
			c++;
			break;
			case 4:
			d++;
			break;
			case 5:
			e++;
			break;
		}
		
	}
	
	tot = a + b + c + d + e;
	
	
	printf("Votos para jose: %i\nVotos para maria: %i\nVotos para Joao: %i\n",a,b,c);
	
	if(a > b && a > c){
		printf("Candidato vencedor foi o jose com %.2f%% dos votos", (a/tot)*100);
	}else if(b > a && b > c){
		printf("Candidato vencedor foi a Maria com %.2f%% dos votos", (b/tot)*100);
	}else{
		printf("Candidato vencedor foi o Joao com %.2f%% dos votos", (b/tot)*100);
	
	}
	
	
	
	
}
