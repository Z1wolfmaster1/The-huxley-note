#include <stdio.h>

int main() {
    
    float a, b, c, r;
    
    scanf("%f\n%f\n%f", &a, &b, &c);
    
    r = (a+b+c)/3;
    
    if(r>=7)
    printf("aprovado");
    
    if(r<3)
    printf("reprovado");
    
    else if((r>=3) && (r<7))
	printf("prova final");
    
    return 0;
    
}
