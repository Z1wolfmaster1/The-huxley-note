#include <stdio.h>

int main() {
	float v, v1, v2, a, b, c, d;
	
	scanf("%f %f %f\n%f %f %f", &a, &b, &v1, &c, &d, &v2);
	
	v=(b*v1)+(d*v2);
	
	printf("VALOR A PAGAR: R$ %.2f", v);
	return 0;
}
