#include <stdio.h>

int main() {
	float b;
	
	scanf("%f", &b);
	
	if(b>30)
	printf("PESO LIMITE EXCEDIDO");
	
	if(b<20)
	printf("%.2f", b, b=b*0);
	
	if((b>=21)&&(b<=25))
	printf("%.2f", b, b=(b-20)*12.50);
	
	if((b>=26)&&(b<=30))
	printf("%.2f", b, b=(b-20)*32.75);
	
	return 0;
}
