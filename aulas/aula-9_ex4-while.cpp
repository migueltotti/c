#include <iostream> // while
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, num, triplo;
	cout<<"Informe um número: "<<endl;
	cin>>num;
	while(i<=num){
		triplo = i * 3;
		printf("O triplo de %d é %d\n", i, triplo);
		i++;
	}
}
