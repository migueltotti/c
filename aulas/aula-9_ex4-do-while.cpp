#include <iostream> // do-while
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i=1, num, triplo;
	cout<<"Informe um valor a ser repetido: "<<endl;
	cin>>num;
	do{
		triplo = i * 3;
		cout<<"O triplo de "<<i<<" é "<<triplo<<endl;
		i++;
	}while(i<=num);
}
