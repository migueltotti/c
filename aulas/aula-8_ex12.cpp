#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float valor, total_vista=0, total_prazo=0, total=0;
	char codigo;
	for(i=1; i<=15; i++){
		cout<<"Informe o coódigo para transação(V ou P) e o valor: "<<endl;
		cin>>codigo>>valor;
		if(toupper(codigo)=='V'){
			total_vista = total_vista + valor;
		}
		else if(toupper(codigo)=='P'){
			total_prazo = total_prazo + valor;
		}
		total = total + valor;
	}
	printf(" Total de compras à vista: %.2f\n Total de compras a prazo: %.2f\n Total de compras efetuadas: %.2f\n", total_vista, total_prazo, total);
}
