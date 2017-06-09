#include <stdio.h>

int main() {
	int h, m, x;
	
	scanf("%d\n%d", &h, &m);
	
	x=(h*60)+m;
	
	printf("%d minutos.", x);
	
	return 0;
}
