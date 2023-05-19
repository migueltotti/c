#include <stdio.h>

main(){
	int ano_nasc, ano_atual, idade;
	printf("Insira o seu ano de nascimento e ao atual: \n");
	scanf("%d%d", &ano_nasc, &ano_atual);
	idade = ano_atual - ano_nasc;
	printf("Sua idade e: %d", idade);
	
	
}
