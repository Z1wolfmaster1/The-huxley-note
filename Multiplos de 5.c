#include <stdio.h>

int main() {
	int i, j=0;
	int a, b, m, m2=0, r;

	scanf("%d%d", &a, &b);

	while(m2<a) {
		j++;
		m2=j*5;
	}

	for(i=j; i*5<b; i++) {
	m=5*i;
	printf("%d",m);
	
	if((b-a)>5)
	printf("|");
	}
	
	r=m+5;
	m=m+5;
	if(m<b)
	printf("%d", r);
	
	else
	
	return 0;
}
