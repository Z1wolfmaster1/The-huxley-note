#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, i;
	
	scanf("%d%d", &a, &i);
	
	if(i>=16)
	printf("3");
	
	else if(a>=150&&i>=12)
	printf("2");
	
	else if(a>=140&&i>=14)
	printf("1");
	
	else
	printf("0");
	
	return 0;
}
