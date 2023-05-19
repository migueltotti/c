#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, fatorial, antecessor=1;
	cout<<"Informe um numero para que seja feito o seu fatorial: "<<endl;
	cin>>num;
	for(i = 1; i < num; i++){
			antecessor = antecessor * (num-i);
		}
	if(num > 0){
		fatorial = antecessor * num;
	}
	else{
		fatorial = 1;
	}
	cout<<"O resultado é: "<<fatorial<<endl;
}
