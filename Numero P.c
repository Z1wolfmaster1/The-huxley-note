#include <stdio.h>

int main() {
	int x, i, div=0;
	
	inicio:
		scanf("%d", &x);
		
		switch(x) {
			case -1:
				break;
				
			case 1:
				printf("0\n");
				goto inicio;
				break;
				
			case 0:
				printf("0\n");
				goto inicio;
				break;
	default:
		for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("1\n");
  else
    printf("0\n");

        div=0;
		goto inicio;
		break;

}
		
	return 0;
}
