#include <stdio.h>

int main() {
	int x;
	float y, m;
	
	scanf("%d\n%f", &x, &y);
	m=x/y;
	printf("%.3f km/l", m);
	return 0;
}
