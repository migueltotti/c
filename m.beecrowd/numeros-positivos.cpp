#include <iostream>

using namespace std;

int main(){
	int i, quant_positivos=0;
	float num;
	for(i=1; i<=6; i++){
		cin>>num;
		if(num > 0){
			quant_positivos++;
		}
	}
	cout<<quant_positivos<<" valores positivos"<<endl;
}
