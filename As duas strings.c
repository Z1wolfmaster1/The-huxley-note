#include <stdio.h>
#include <string.h>

int main() {
	char a[121], b[121];
	
	scanf("%s\n%s", &a, &b);
	if(strcmp(a, b) == 0) {
		printf("IGUAIS");
	}
	else {
		printf("DIFERENTES");
	}
	return 0;
}
