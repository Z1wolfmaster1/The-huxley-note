#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    int a[n];

    for (i=0; i<n; i++) {
        scanf("\t %d", &a[i]);
    }

    for (j=n-1; j>-1; j--) {
        printf("%d ", a[j]);
    }
    return 0;
}
