#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, idade, quant_p=0, quant_f=0, maior_i, menor_i;
	float salario, soma_s=0, media_s;
	char sexo;
	do {
		printf("Pessoa %d nos informe sua idade, sexo(M/F) e salário:\n", i);
		cin>>idade>>sexo>>salario;
		soma_s += salario;
		if(i==1){
			maior_i = idade;
			menor_i = idade;
		}
		else {
			if(idade > maior_i){
				maior_i = idade;
			}
			else if(idade < menor_i && idade > 0){
				menor_i = idade;
			}
		}
		if(toupper(sexo) == 'F'){
			if(salario <= 1500.00){
				quant_f++;
			}
		}
		i++;
		quant_p++;
	}while(idade > 0);
	media_s = soma_s/quant_p;
	printf("A média dos salários dos habitantes deste município é: %.2f\n", media_s);
	printf("A maior idade das pessoas pesquisadas: %d \nA menor idade das peesoas pesquisadas: %d\n", maior_i, menor_i);
	printf("Quantidade de mulheres com salário até 1500,00: %d", quant_f);
}
