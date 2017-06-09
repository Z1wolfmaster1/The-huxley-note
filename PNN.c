#include <stdio.h>
#include <locale.h>

int main() {
    
	setlocale(LC_ALL,"");
	int x;
	char p1[31]="Positivo", p2[31]="Negativo", p3[31]="Nulo";
    
	
	printf("\nDescubra se um número é positivo, negativo ou nulo.");
	printf("\n\nNúmero? ");
    scanf("%d", &x);
    
    if(x>0) 
    printf("\n\t%s", p1);
    
    else if(x<0) 
    printf("\n\t%s", p2);
    
    else printf("\n\t%s", p3);
    
    return 0;
}
