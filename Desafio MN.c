#include <stdio.h>

int main() {
	int s=-1, m=0;
	
	while(s!=0) {
		scanf("%d", &s);
		if(s>m) {
			m=s;
		}
	}
	printf("%d", m);
	
	return 0;
}
