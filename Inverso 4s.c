#include <stdio.h>

int main() {
	int i;
	char n[4];
	
	for(i=0; i<4; i++) {
		scanf("%s", n[i]);
	}
	
	if((n[1]==0)&&(n[2]==0)&&(n[3]==0))
	printf("%d", n[0]);
	
	else {
		printf("%d%d%d", n[3],n[2],n[1],n[0]);
	}	
	
	return 0;
}
