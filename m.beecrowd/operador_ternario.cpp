#include <iostream>

using namespace std;

int main(){
	int n1, n2, maior;
	scanf("%d%d", &n1, &n2);
	maior = (n1>n2)?n1 : n2;
	printf("O maior numero eh %d", maior); 
	
/*ou	n1>n2? printf("O maior valor digitado foi %d", n1):
		   	   printf("O maior valor digitado foi %d", n2); 
*/	
}
