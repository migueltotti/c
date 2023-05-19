#include <iostream>

using namespace std;

int main(){
	int i, num, memoria=0;
	for(i=1;i<=5;i++){
		cout<<"informe um numero: "<<endl;
		cin>>num;
		if(num > memoria){
			memoria = num;
		}
	}
	cout<<memoria;
}
