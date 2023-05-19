#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, soma=0, cont;
	// soma deve sempre apresentar valor 0 (zero) inicialmente;
	//  numero, somatória dos valores, contar os valores
	// no for o valor das variaveis vai sendo substituido quando for repetido, o valor anterior é perdido
	for(cont=1; cont<=4; cont++){
		cout<<"Digite um valor: "<<endl;
		cin>>num;
		soma = soma + num;
	}
	cout<<"soma: "<<soma<<endl;
}
