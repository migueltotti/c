#include <stdio.h>

main(){
	float nota1, nota2, nota3, nota_total;
	int peso1, peso2, peso3;
	printf("Digite suas 3 notas e seus respectivos pesos: \n");
	scanf("%f%d", &nota1, &peso1);
	scanf("%f%d", &nota2, &peso2);
	scanf("%f%d", &nota3, &nota3);
	nota_total = ((nota1 * peso1)+(nota2 * peso2)+(nota3 * peso3))/3;
	printf("Sua nota final eh: %.2f", nota_total);
}
