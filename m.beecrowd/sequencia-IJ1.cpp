#include <iostream>

using namespace std;

int main(){
	int i=1, j;
	for(j=60; j>=0; j--){
		printf("I=%d J=%d\n", i, j);
		i+=3;
		j-=4;
	}
}
