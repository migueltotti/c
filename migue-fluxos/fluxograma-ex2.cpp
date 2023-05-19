#include <stdio.h>

main(){
	int base, altura, area;
	printf("DIgite o valor da base e da altura do retangulo: \n");
	scanf("%d%d", &base ,&altura);
	area = base * altura;
	printf("O valor da Area desse retangulo e: %d", area);
}
