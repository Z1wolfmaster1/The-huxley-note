#include <stdio.h>

int main() {
	float n;
	
	scanf("%f", &n);
	
	if(n>500)
	printf("%.2f", n, n=n+(n/10));
	
	else if((n<500) && (n>300))
	printf("%.2f", n, n=n+((n/10)-((n/100)*3)));
	
	else
	printf("%.2f", n, n=n+((n/10)/2));
	
	return 0;
}
