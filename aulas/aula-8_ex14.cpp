#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, base, expoente, calculo=1;
	cout<<"Informe dois numeros, a base e seu expoente:"<<endl;
	cin>>base>>expoente;
	for(i=1; i <= expoente; i++){
		calculo = calculo * base;
	}
	cout<<"O resultado é: "<<calculo<<endl;
}
