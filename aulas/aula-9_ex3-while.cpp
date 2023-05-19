#include <iostream> // while

using namespace std;

int main(){
	int i = 1, media, soma = 0, quant = 0;
	while(i<=50){
		i++;
		if((i%2) == 0){
			soma = soma + i;
			quant++;
		}
	}
	media = soma/quant;
	cout<<soma<<endl;
	cout<<"A media dos numeros pares eh: "<<media<<endl;
}
