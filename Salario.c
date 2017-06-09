#include <stdio.h>

int main() {
	int n, h;
	float dh, s;
	
	scanf("%d\n%d\n%f", &n, &h, &dh);
	
	s=dh*h;
	
	printf("NUMBER = %d\nSALARY = R$ %.2f", n, s);
	
	return 0;
}
