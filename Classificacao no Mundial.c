#include <stdio.h>
#include <stdlib.h>

int main() {
	int p[6], pf=0, i;
	
	for(i=0; i<6; i++) {
		scanf("%d", &p[i]);
		pf=pf+p[i];
	}
	
	if(pf<100)
	printf("Eliminado");
	
	else
	printf("Classificado");
	
	return 0;
}
