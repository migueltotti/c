#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, sexo, quant_f=0, quant_t=0;
	float maior, menor, altura, soma_f=0, soma_t=0;
	for(i=1; i<=4; i++){
		cout<<"Informe sua altura e sexo pessoa "<<i<<endl;
		cin>>altura>>sexo;
		if(i == 1){
			maior = altura;
			menor = altura;
		}
		else{
			if(altura > maior){
				maior = altura;
			}
			else if(altura < menor){
				menor = altura;
			}
		}
		if(sexo == 2){
			soma_f += altura;
			quant_f++;
		}
		soma_t += altura;
		quant_t++;
		
	}
	printf("A maior altura é: %.2f\nA menor altura é: %.2f\n", maior, menor);
	printf("A média da altura das mulheres é: %.2f\n", (soma_f / quant_f));
	printf("A média da altura da turma é: %.2f\n", (soma_t / quant_t));
}
