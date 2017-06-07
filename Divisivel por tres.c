#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, d=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		if(i%3==0&&n%i==0)
		d++;
}
    
    if(d==0)
    printf("O numero nao possui divisores multiplos de 3!");
    
    else
    printf("%d", d);
    
	return 0;
}
