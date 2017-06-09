#include <stdio.h>

int main(void)
{
    int n, c, r;
    
	scanf("%d", &n);
     
    for(c=1 ; c<=10 ; c++) {
        r = n*c;
        printf("%d X %d = %d\n", n, c, r);
    }
    return 0;
}
