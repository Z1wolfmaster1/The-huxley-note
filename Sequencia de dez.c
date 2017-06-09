#include <stdio.h>
#include <stdlib.h>

int main() {
	int n[10], i, x, v=0;
	
	for(i=0; i<10; i++) {
		scanf("%d", &n[i]);
	}
	
	x=n[9];
	
	for(i=0; i<10; i++) {
		if(n[i]==x){
		v++;
	}
	}
	printf("O numero %d apareceu %d vezes", n[9], v);
	return 0;
}
