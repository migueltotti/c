#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, pessoas, idade, soma_idades=0;
	float media;
	cout<<"Informe a quantidade de pessoas: "<<endl;
	cin>>pessoas;
	for(i=1; i<=pessoas; i++){
		cout<<"Informe a sua idade pessoa "<<i<<": "<<endl;
		cin>>idade;
		soma_idades = soma_idades + idade;
	}
	media = soma_idades/pessoas;
	if(media<=25){
		cout<<"A turma é jovem!"<<endl;
	}
	else if(26<media && media<60){
		cout<<"A turma é adulta!"<<endl;
	}
	else{
		cout<<"A turma é idosa!"<<endl;
	}
}
