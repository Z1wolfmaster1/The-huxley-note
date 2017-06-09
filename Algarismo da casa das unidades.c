#include <stdio.h>
#include <math.h>

int main() {
	int n, x;
	
	scanf("%d", &n);
	
	if(n>=0){
	        if(n<10)
	        printf("%d", n);
	
	else{
	    x=n%10;
	    printf("%d", x);
	    }
	}
	
	else{
		if(n>-10)
	        printf("%d", n);
	
	else{
	    x=n%10;
	    printf("%d", x);
	    }
	}

	return 0;
}
