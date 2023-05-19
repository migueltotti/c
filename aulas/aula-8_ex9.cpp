#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, notas, soma_notas=0, media, quant_notas;
	cout<<"Quantas notas serão apresentadas: "<<endl;
	cin>>quant_notas;
	for(i=1;i<=quant_notas;i++){
		cout<<"Informe sua nota: "<<endl;
		cin>>notas;
		soma_notas = soma_notas + notas;
	}
	media = (soma_notas/quant_notas);
	cout<<"A media aritimética de "<<quant_notas<<" notas é: "<<media<<endl;
}
