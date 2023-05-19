#include <iostream>

using namespace std;

int main(){
	int i, sexo;
	float maior, menor, altura;
	for(i=1; i<=4; i++){
		cout<<"Informe sua altura e sexo pessoa "<<i<<endl;
		cin>>altura;
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
	}
	cout<<maior<<endl;
	cout<<menor<<endl;
}
