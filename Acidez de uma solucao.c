#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	
	scanf("%d", &x);
	
	if(x>=1&&x<7)
	printf("Acida");
	
	else if(x==7)
	printf("Neutra");
	
	else
	printf("Basica");
	
	return 0;
}
