#include <iostream> // while
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, num;
	printf("Insira um número: \n");
	cin>>num;
	while(i<=num){
		cout<<i<<endl;
		i++;
	}
}
