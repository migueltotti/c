#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	float altura, peso_ideal;
	char sexo;
	cout<<"Insira seu peso e sexo, respectivamente (M ou F): "<<endl;
	cin>>altura>>sexo;
	switch(toupper(sexo)){
		case 'M': peso_ideal = (72.7 * altura) - 58;
				  cout<<"Peso ideal para homens: "<<peso_ideal<<endl;
				  break;
		case 'F': peso_ideal = (62.1 * altura) - 44.7;
				  cout<<"Peso ideal para mulheres: "<<peso_ideal<<endl;
	}           
	
}
