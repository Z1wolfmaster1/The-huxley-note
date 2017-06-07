#include <stdio.h>

int main() {
	double a, l;
	
	scanf("%lf\n%lf", &a, &l);
	
	if((a/l)==(1/1)||(a/l)==(1/2)||(a/l)==(1/3)||(a/l)==(1/4)||(a/l)==(1/5)||(a/l)==(1/6)||(a/l)==(1/7)||(a/l)==(1/8)) {
	printf("A");
	return 0;
	}
	
	else if(a/l==(1/9)||(a/l)==(1/10)||(a/l)==(1/11)||(a/l)==(a/l)==(1/12)) {
	printf("B");
	return 0;
	}
	
	else if(a/l==(1/13)||(a/l)==(1/14)||(a/l)==(1/15)||(a/l)==(1/16)||(a/l)==(1/17)||(a/l)==(1/18)) {
	printf("C");
	return 0;
	}
	
	else
	printf("D");
	
	return 0;
}
