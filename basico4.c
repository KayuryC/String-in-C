#include <stdio.h>
#include <string.h>
//Função
void string_comp() {
	//Declarando variaveis
	int tam;
	char string[130];
	char string2[130];
	int i,j = 0;

	//Le string
	scanf("%[^\n]", string);
	
	//Processo
	for(i = 0; i < tam; i++) {
		string[i] = toupper(string[i]);
	}
	tam = strlen(string);
	for(i = tam - 1; i >= 0; i--) {
		string2[j] = string[i];
		j++;
	}
	//Saida
	if(strcmp(string, string2)== 0) {
		printf("E um polindromo");
	} else {
		printf("Nao e um polindromo");
	}
	
}
int main() {	
		printf("Digite uma frase ou uma palavra: ");
		string_comp();
}
