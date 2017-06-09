#include <stdio.h>
#include <conio.h>

void main (void){

	char s[80];

	puts("Entre com uma frase");
	gets(s);
	puts("Aperta qualquer tecla para limpar a tela");
	getchar();
	clrscr();
	puts("Parabens!");
	getchar();
}
