#include <stdio.h>

int main() {
	long int x;
	
	scanf("%ld", &x);
	
	if((x>0)&&(x%2==0))
	printf("POSITIVO PAR\n");
	
	if((x>0)&&(x%2!=0))
	printf("POSITIVO IMPAR\n");
	
	if((x<0)&&(x%2==0))
	printf("NEGATIVO PAR\n");
	
	if((x<0)&&(x%2!=0))
	printf("NEGATIVO IMPAR\n");
	
	if(x==0)
	printf("NULO\n");
	
	return 0;
}
