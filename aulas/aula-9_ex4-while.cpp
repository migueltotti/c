#include <iostream> // while
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, num, triplo;
	cout<<"Informe um n�mero: "<<endl;
	cin>>num;
	while(i<=num){
		triplo = i * 3;
		printf("O triplo de %d � %d\n", i, triplo);
		i++;
	}
}
