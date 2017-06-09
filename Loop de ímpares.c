#include <stdio.h>

int main() {
	register int i;
	int a, b;
	
	scanf("%d\n%d", &a, &b);
	for(i=a; i<=b; i++ ) {
		if (i%2!=0)
		{
			printf("\n%d\n",i);
		}
	}
	return 0;
}

	return 0;
}
