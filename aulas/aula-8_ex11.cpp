#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, eleitores, cA=0, cB=0, cC=0;
	char candidato;
	cout<<"Informe a quantidade de eleitores: "<<endl;
	cin>>eleitores;
	for(i=1; i<=eleitores; i++){
		cout<<"Eleitor "<<i<<" insira o candidato a se votado(A, B ou C): "<<endl;
		cin>>candidato;
		if(toupper(candidato) == 'A'){
			cA++;
		}
		else if(toupper(candidato)== 'B'){
			cB++;
		}
		else if(toupper(candidato)== 'C'){
			cC++;
		}
	}
	printf("Resultado da votação: \n");
	printf(" Candidato A: %d\n Candidato B: %d\n Candidato C: %d\n", cA, cB, cC);
}
