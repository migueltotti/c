#include <iostream>

using namespace std;

int main(){
	int i, num, pares=0, impares=0, positivos=0, negativos=0;
	for(i=1; i<=5; i++){
		cin>>num;
		if(num > 0){
			positivos++;
			if(num%2==0){
				pares++;
			}
			else{
				impares++;
			}
		}
		else if(num == 0){
			pares++;
		}
		else{
			negativos++;
			if(num%2==0){
				pares++;
			}
			else{
				impares++;
			}
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);
}
