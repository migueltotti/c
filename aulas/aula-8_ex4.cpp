#include <iostream>

using namespace std;

int main(){
	int inicio, final, x;
	cout<<"Informe um numero inicial e um final: "<<endl;
	cin>>inicio>>final;
	if(inicio%2 == 0){
		inicio = inicio + 1;
		for(x = inicio; x <= final; x = x + 2){
			cout<<x<<endl;
		}
	}
	else{
		for(x = inicio; x <= final; x = x + 2){
			cout<<x<<endl;
		}
	}
}
