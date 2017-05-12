#include <stdio.h>
#include <stdlib.h>

int main() {
	int a=0,b=0,c=0,t=0;
	
	while(a>-1&&b>-1&&c>-1&&a<2&&b<2&&c<2) {
	    scanf("%d%d%d",&a,&b,&c);
	
	    if(a>-1&&b>-1&&c>-1){
	    if((a!=b) && (b==c))
	    printf("A venceu!\n\n");
	
	    else if((b!=a) && (a==c))
	    printf("B venceu!\n\n");
	
	    else if((c!=a) && (a==b))
	    printf("C venceu!\n\n");
	
	    else if((a==b) && (b==c))
	    printf("Empate\n\n");
	    t++;
        }
    }
    printf("\nTentativas: %d", t);
}
