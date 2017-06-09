/*
  Programa: ret.c
  Autor: Liviu Gabriel Anghel
  Objetivo: Desenhar um quadrado usando '*'s
	    Aprender usar a funcao 'gotoxy();'
  Data: 14/05/2002
*/

/*	Bibliotecas usadas pelo programa */
#include <stdio.h>
#include <conio.h>

void main (void){

	int i,j;

	void clrscr(void);
	void setcursortype(void NOCURSOR);
	gotoxy(20,5);
	for (i = 5; i < 10; i++){
			int gotoxy(20,i);
			printf("*");

	}
	for (i = 20; i < 30; i++){
			int gotoxy(i,10);
			printf("*");
	}
	for (i = 10; i > 5; i--){
			int gotoxy(30,i);
			printf("*");
	}
	for (i = 30; i > 20; i--){
			int gotoxy(i,5);
			printf("*");
	}
	printf("\n\n\n\n\n\n");
	puts("Aperta qualquer tecla");
	getche();
	clrscr();
	puts("Parabens!!");
	getche();


}
