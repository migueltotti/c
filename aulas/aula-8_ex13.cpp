#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, idades, quant_pessoas_peso_altura=0, quant_pessoas_idade_altura=0;
	float soma_idades=0, media_idades, pesos, alturas, percent;
	cout<<"Informe suas idades, pesos e alturas a seguir."<<endl;
	for(i=1; i<=10; i++){
		cout<<"Pessoa "<<i<<endl;
		cin>>idades>>pesos>>alturas;
		soma_idades = soma_idades + idades;
		if(pesos >= 90 && alturas <= 1.50){
			quant_pessoas_peso_altura++;
		}
		else if(alturas >= 1.90 && 10 <= idades && idades <= 30){
			quant_pessoas_idade_altura++;
		}
	}
	media_idades = soma_idades/2;
	cout<<"Média de idades: "<<media_idades<<endl;
	cout<<"Quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1.50 metros: "<<quant_pessoas_peso_altura<<endl;
	percent = quant_pessoas_idade_altura * 0.1;
	cout<<"Percentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90 metros: "<<(percent * 100)<<"%"<<endl;
}
