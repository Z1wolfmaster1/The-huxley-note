#include <stdio.h>

int main() {
	int i, n, ns[i], s=0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &ns[i]);
}
    
    for(i=0; i<n; i++) {
    	s=s+ns[i];
}

    printf("%d\n", s);
    
	return 0;
}
