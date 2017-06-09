#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, D, x1, x2;
	
	scanf("%f\n%f\n%f", &a, &b, &c);
	
	D=pow(b,2)-4*a*c;
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	
	if(a==0)
	printf("NEESG");
	
	else if(D<0)
	printf("NRR");
	
	else
	printf("%.2f\n%.2f", x1, x2);
	
	return 0;
}
