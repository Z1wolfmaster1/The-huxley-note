#include <stdio.h>

int main() {
	int l1, l2, l3, t;
	char eq[31]="equilatero", is[31]="isosceles", es[31]="escaleno";
	
	scanf("%d\n%d\n%d", &l1, &l2, &l3);
	
	if ((l1 == l2)&&(l2 == l3))
        {  
             printf("%s", eq);
        }
         else if ((l1 != l2)&&(l1 != l3)&&(l2 != l3))
        {
            printf("%s", es);
        }
         else 
        {
            printf("%s", is);
			
		}
	
	return 0;
}
