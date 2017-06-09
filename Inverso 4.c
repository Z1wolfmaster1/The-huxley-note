#include <stdio.h>

int main() {
	int x, a, b, c, d;
	
	scanf("%d", &x);
	
	a=(x/1000);
	b=((x/100)-((a*10)));
	c=((x/10)-((a*100)+(b*10)));
	d=(x-((a*1000)+(b*100)+(c*10)));
	
	if((b==0)&&(c==0)&&(d==0))
	printf("%d", a);
	
	else
	printf("%d%d%d%d", d, c, b, a);
	
	return 0;
}
