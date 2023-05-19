#include <iostream> // do-while

using namespace std;

int main(){
	int i=30, soma=0;
	do{
		if((i%2) == 1){
			soma = soma + i;
		}
		i++;
	}while(i<=100);
	cout<<soma<<endl;
}
