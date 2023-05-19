#include <stdio.h>

main(){
	int temp_c;
	float temp_f;
	printf("Digite a temperatura em Celcius: \n");
	scanf("%d", &temp_c);
	temp_f = (temp_c * 1.8) + 32;
	printf("O valor da temperatura apresentada em Fahrenheit eh: %.2f", temp_f);
	
}
