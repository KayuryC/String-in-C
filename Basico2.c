#include <stdio.h>
#include <string.h>

//Função toupper
void stringM() {
	//Declarando variaveis
	int tamanho;
	char string[120];

	//Le string
	scanf("%[^\n]", string);
	
	//Processo
	tamanho= strlen(string);
	for(int i=0; i < tamanho; i++) {
		string[i] = toupper(string[i]);
	}
	//Saida
	printf("%s", string);
	getch();
	system("cls");
}
int main() {
		printf("Digite uma frase ou uma palavra: ");
		stringM();	
}
