#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int prato, sobremesa, bebida, cp, cs, cb, total_calorias;
	cout<<"Informe seu prato, sobremesa e bebida, respectivamente: "<<endl;
	cin>>prato>>sobremesa>>bebida;
	switch(prato){
		case 1: cp = 180;
				break;
		case 2: cp = 230;
				break;
		case 3: cp = 250;
				break;
		case 4: cp = 350;
				break;
	}
	switch(sobremesa){
		case 1: cs = 75;
				break;
		case 2: cs = 110;
				break;
		case 3: cs = 170;
				break; 
		case 4: cs = 200;
				break;
	}
	switch(bebida){
		case 1: cb = 20;
				break;
		case 2: cb = 70;
				break;
		case 3: cb = 100;
				break;
		case 4: cb = 65;
				break;
	}
	
	total_calorias = cp + cs + cb;
	cout<<"A quantidade total de calorias ingeridas nesta refeição é: "<< total_calorias<<endl;
}
