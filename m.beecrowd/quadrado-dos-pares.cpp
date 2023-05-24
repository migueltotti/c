#include <iostream>

using namespace std;

int main(){
	int i, N, quadrado;
	cin>>N;
	for(i=2;i<=N;i=i+2){
		quadrado = i * i;
		printf("%d^2 = %d\n", i, quadrado);
	}
}
