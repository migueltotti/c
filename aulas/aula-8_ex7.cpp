#include <iostream>

using namespace std;

int main(){
	int i, num, par=0, impar=0;
	for(i=1; i<=10; i++){
		cout<<"Informe um numero: "<<endl;
		cin>>num;
		if(num%2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	cout<<"A quantidade de numeros pares digitados: "<<par<<endl;
	cout<<"A quantidade de numeros impares digitados: "<<impar<<endl;
}
