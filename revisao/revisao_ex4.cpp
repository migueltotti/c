#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, p=1, num_cart, quant_multas;
	float multa, soma_multas=0, maior_quant=0, cart_multa;
	do{
		cout<<"Informe o número da sua carteirinha motorista "<<p<<endl;
		cin>>num_cart;
		p++;
		if(num_cart > 0){
			cout<<"Número de multas: "<<endl;
			cin>>quant_multas;
			if(quant_multas > maior_quant){
				maior_quant = quant_multas;
				cart_multa = num_cart;
			}
			for(i=1; i<=quant_multas; i++){
				cout<<"Insira o valor da multa "<<i<<endl;
				cin>>multa;
				soma_multas += multa;
			}
		}
	}while(num_cart > 0);
	cout<<"Somátoria de todas as multas: "<<soma_multas<<endl;
	cout<<"Motorista que obteve o maior número de multas: "<<cart_multa<<endl;
	cout<<"Quantidade de multas: "<<maior_quant<<endl;
}
