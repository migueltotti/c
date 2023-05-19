#include <iostream> // while

using namespace std;

int main(){
	int i = 30, soma = 0;
	while(i<=100){
		if((i%2) == 1){
			soma = soma + i;
		}
		i++;
	}
	cout<<soma<<endl;
}
