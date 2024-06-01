#include <stdio.h>
#include <string.h>
//Função
void string_invert() {
	//Declarando variaveis
	int tamanho;
	char string[130];
	char string2[130];
	int i,j = 0;

	//Le string
	scanf("%[^\n]", string);

	//Processo
	tamanho= strlen(string);
	for(i = tamanho - 1; i >= 0; i--) {
		string2[j] = string[i];
		j++;
	}
	printf("%s", string2);
	//Saida
	getch();
	system("cls");
}
int main() {
	while(1){	
	printf("Digite uma frase ou uma palavra: ");
	string_invert();
	}
}
