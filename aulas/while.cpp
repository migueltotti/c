#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	int num = 1;
	while(num>=0){
		cout<<"Informe um numero negativo: "<<endl;
		cin>>num;
	}
	cout<<"O numero negativo inserido foi: "<<num<<endl;
}
