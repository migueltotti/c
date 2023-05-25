#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, quant;
	float preco, total=0;	
	cout<<"Informe os seguintes valores: "<<endl;
	cout<<"Para parar digite zero(0) como número do item."<<endl;
	while(num > 0){
		cout<<"Número do item: "<<endl;
		cin>>num;
		if(num > 0){
			cout<<"Preço unitário do item: "<<endl;
			cin>>preco;
			cout<<"Quantidade: "<<endl;
			cin>>quant;
			total += (preco * quant);
		}
	}
	printf("Total a ser pago: %.2f.", total);
}
