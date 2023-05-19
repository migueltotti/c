#include <stdio.h>

main(){
	int horas;
	float valor, salario;
	printf("Digite a quantidade de horas trbalhadas e o valor da hora: \n");
	scanf("%d%f", &horas, &valor);
	salario = horas * valor;
	printf("O seu salario eh: %f", salario);
}
