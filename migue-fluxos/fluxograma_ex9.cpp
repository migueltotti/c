#include <stdio.h>
main(){
	int base, altura;
	float area;
	printf("Digite o valor da area e da base do triangulo: \n");
	scanf("%d%d", &base, &altura);
	area = (base * altura)/2;
	printf("O valor da area do triangulo eh: %.2f", area);
}
