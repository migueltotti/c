#include <iostream>

using namespace std;

int main(){
	int num, mult, cont;
	cout<<"Digite um numero: "<<endl;
	cin>>num;
	for(cont=1; cont<=10; cont++){
		mult = cont * num;
		cout<<num<<" x "<<cont<<" = "<<mult<<endl;
	}
}
