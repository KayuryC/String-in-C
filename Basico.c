#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Declarando variaveis
	char frase[130];
	int tamanho;
	
	//Input do usuario
	puts("Digite uma frase ou uma palavra: ");
	gets (frase);
	
	//Processo
	tamanho = strlen(frase);
	
	//Saida
	system("cls");
	printf("Este e o tamanho da string: %d\n%s", tamanho, frase);
	
	return 0;
}
