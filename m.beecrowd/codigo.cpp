#include <iostream>
 
using namespace std;
 
int main() {
 
    int codigo, quant;
    float preco;
    scanf("%d%d", &codigo, &quant);
    if (codigo == 1){
        preco = quant * 4.0;
        printf("Total: R$ %.2f", preco);
    }
    else if (codigo == 2){
        preco = quant * 4.5;
        printf("Total: R$ %.2f", preco);
    }
    else if (codigo == 3){
    	preco = quant * 5.0;
    	printf("Total: R$ %.2f", preco);
	}
	else if (codigo == 4){
		preco = quant * 2.0;
		printf("Total: R$ %.2f", preco);
	}
	else {
		preco = quant * 1.5;
		printf("Total: R$ %.2f \n", preco);
	}
 
    return 0;
}
