#include <stdio.h>

int main()
{
	int a, b, c, x;
	
	scanf("%d \n%d \n%d", &a, &b, &c);
	
	if( a<b ) {
		x = a;
		a = b;
		b = x;
	}
	
	if( a<c ) {
		x = a;
		a = c;
		c = x;
	}
	
	if( b<c ) printf("%d\n%d\n%d", a, b, c);
	else printf("%d\n%d\n%d", a, c, b);
	
	return 0;
}
