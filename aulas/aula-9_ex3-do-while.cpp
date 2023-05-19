#include <iostream> // do-while

using namespace std;

int main(){
	int i=1, media, soma = 0, quant = 0;
	do{
		i++;
		if((i%2) == 0){
			soma = soma + i;
			quant++;
		}
	}while(i<=50);
	cout<<soma<<endl;
	media = soma/quant;
	cout<<"A media dos numeros pares eh: "<<media<<endl;
}
