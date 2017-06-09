#include <stdio.h>
#include <math.h>

int main() {
	int x, i, c=0;
	 
	inicio:
		scanf("%d", &x);
			
		if(x==-1)
		printf("");
		
		else{
			if(x==1){
			printf("0\n");
			goto inicio;
			}
			
			else{
				if(x>1){
			for (i=1; i<=x; i++) {
            
            if (x % i == 0) c++;    
        }
        
        
        if (c == 2)
        {
           printf("1\n");
           c=0;
		   goto inicio;             
        }
        else
        {
            printf("0\n");
            c=0;
			goto inicio;    
        }
			}
		}
	}
				
	return 0;
}
