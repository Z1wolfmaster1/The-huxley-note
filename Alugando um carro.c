#include <stdio.h>

int main() {
	float v, d, q;
	
	scanf("%f\n%f", &d, &q);
	
	if(q<=(d*100)) {
	v=(d*90);
	printf("%.2f", v);
	}
	
	else if(q>(d*100)) {
		v=(d*90)+((q-(d*100))*12);
		printf("%.2f", v);
	}
	return 0;
}
