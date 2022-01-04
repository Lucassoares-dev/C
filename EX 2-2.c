#include <stdio.h>

void main(){
	
	float vp, pp, kg, tt, troc, nc, fal;
	
	printf ("\n Digite quanto voce tem em reais: ");
	scanf ("%f", &vp);
	
	printf ("\n Digite o preco em kg do produto: ");
	scanf ("%f", &pp);
	
	printf ("\n Digite quantos kg deseja comprar: ");
	scanf ("%f", &kg);
	
	tt = pp * kg;
	
	if ( tt <= vp ){
		printf ("\n Voce ira pagar: %.2f", tt);
		troc = vp - tt;
			if ( troc > 0){
			printf ("\n O seu troco sera de: %.2f", troc );
			nc = troc / pp;
			printf ("\n Voce ainda pode comprar com o troco: %.2f Kg ", nc);
	}
			else {
			printf ("\n Nao tera troco!" );}
	}
	else {
		printf ("\n Voce nao tem dinheiro suficiente para comprar o peso solicitado!");
		fal = (kg * pp) - vp;
		printf ("\n Faltam %.2f reais para comprar %.2f Kg do produto solicitado!", fal , kg );
	}
	
}
