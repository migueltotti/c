#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	scanf("%d", &num);
	switch(num) // só pode ser usado com variaveis int ou char
	{
		case 1: printf("Número um digitado!");
				break;
		case 2: printf("Número dois digitado!");
				break;
		case 3: printf("Número três digitado!");
				break;
		default: printf("Número digitado diferente de 1, 2 e 3!");
	}
/*	
#include <stdio.h>
#include <ctype.h> //usado por causa do toupper()
main()
{
	char letra;
	scanf("%c", &letra);
	switch(toupper(letra)) //transforma a letra digitada em letra maiúscula
	{
		case 'A': printf("letra A digitado!");
				break;
		case 'B': printf("letra B digitado!");
				break;
		default: printf("Letra diferente de A e B!");
	}
}
//A função tolower(letra) transforma a letra em minúscula. */
}
