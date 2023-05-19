#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float N1, N2, N3, N4, media, media_final, nota_do_exame;
	cin>>N1>>N2>>N3>>N4;
	media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/ 10;
	if (media >= 7.0){
		cout<<"Media: "<< fixed << setprecision(1)<< media <<endl;
		cout<<"Aluno aprovado."<<endl;
	}
	
	else if (6.9 >= media && media >= 5.0){
		cout<<"Media: "<< fixed << setprecision(1)<< media <<endl;
		cout<<"Aluno em exame."<<endl;
		cin>>nota_do_exame;
		cout<<"Nota do exame: "<< fixed << setprecision(1)<< nota_do_exame <<endl;
		media_final = (nota_do_exame + media)/ 2;
		if(media_final >= 5.0){
			cout<<"Aluno aprovado."<<endl;
		}
		else{
			cout<<"Aluno reprovado."<<endl;
		}
		cout<<"Media final: "<< fixed << setprecision(1)<< media_final<<endl;
	}
	else {
		cout<<"Media: "<< fixed << setprecision(1)<< media <<endl;
		cout<<"Aluno reprovado."<<endl;
	}
}
