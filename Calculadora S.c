#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}

int main () {
	setlocale(LC_ALL,"");
	int a, b;
	char o;
	
	puts("Escreva uma operação de dois números\n");
	scanf("%d%c%d", &a, &o, &b);
	
	switch(o) {
		case '*':
		gotoxy(4,2);
		printf("= %d\n", a*b);
		break;
		
		case '/':
		gotoxy(4,2);
		printf("= %d\n", a/b);
		break;
		
		case '+':
		gotoxy(4,2);
		printf("= %d\n", a+b);
		break;
		
		case '-':
		gotoxy(4,2);
		printf("= %d\n", a-b);
		break;
		
		case '%':
		gotoxy(4,2);
		printf("= %d\n", a%b);
		break;
		
		default:
			printf("ERROR");
	}
}
