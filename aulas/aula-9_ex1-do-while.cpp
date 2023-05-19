#include <iostream> // do-while
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, num;
	cout<<"Insira um número: "<<endl;
	cin>>num;
	do{
		cout<<i<<endl;
		i++;
	}while(i<=num);
}
