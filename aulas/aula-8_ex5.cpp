#include <iostream>
#include <ctype.h> // deixar a letra digitada maiuscula ou minuscula sempre

using namespace std;

int main(){
	int i, idade, m=0, f=0;
	char sexo;
	for(i=1; i<=15; i++){
		cout<<"Informe o sexo(M/F) e idade: "<<endl;
		cin>>sexo>>idade;
		if(idade >= 18 && toupper(sexo) == 'M'){
			m++; // m = m + 1;
		}
		else if(idade >= 18 && toupper(sexo) == 'F'){
			f++; // f = f + 1;
		}
	}
	cout<<"Quantidade de homens maiores de 18 anos: "<<m<<endl;
	cout<<"Quantidade de mulheres maiores de 18 anos: "<<f<<endl;
}
