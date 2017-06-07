#include <stdio.h>

int main() {
	int an, a1, a2, i, j, x[10000];
	
	scanf("%d%d", &a1, &a2);
	
	an=a2-a1;
	
	for(i=0; i<an; i++) {
		for(j=a1; j<=a2; j++) {
			x[i]=j;
        }
    }

    for(i=0; i<an; i++) {
    	if(x[i] % 4 == 0 && (x[i] % 400 == 0 || x[i] % 100 != 0))
    	printf("%d\n", x[i]);
}


	return 0;
}
