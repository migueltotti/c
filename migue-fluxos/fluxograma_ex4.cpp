#include <stdio.h>

main (){
	float peso_kg, peso_g;
	printf("Digite seu peso em kilos: \n");
	scanf("%f", &peso_kg);
	peso_g = peso_kg * 1000;
	printf("Seu peso em gramas eh: %.2f", peso_g);
}
