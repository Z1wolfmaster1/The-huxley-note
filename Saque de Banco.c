#include<stdlib.h>
#include<stdio.h>

int main() {

    int saque;
    int resto50,resto20,resto10,resto5;
    int nota50,nota20,nota10,nota5,nota1;

    scanf("%d",&saque);
    
	nota50 = saque / 50;
    resto50 = saque % 50;
    
	nota20 = resto50 / 20;
    resto20 = resto50 % 20;
    
	nota10 = resto20 / 10;
    resto10 = resto20 % 10;
    
	nota5 = resto10 / 5;
    resto5 = resto10 % 5;
    
	nota1 = resto5 / 1;
    
    printf("Notas de 50: %d\n",nota50);
    
	printf("Notas de 20: %d\n",nota20);
    
	printf("Notas de 10: %d\n",nota10);
    
	printf("Notas de 5: %d\n",nota5);
    
	printf("Notas de 1: %d\n",nota1);

    return 0;
}
