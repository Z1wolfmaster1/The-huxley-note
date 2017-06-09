#include <stdio.h>

int main() {

  int x, a, b, c, d;
  
  printf("Digite um numero natural de 4 digitos: ");
  scanf("%d", &x);
    
	a=(x/1000);
	b=((x/100)-((a*10)));
	c=((x/10)-((a*100)+(b*10)));
	d=(x-((a*1000)+(b*100)+(c*10)));
    
  printf("%d%d%d%d\n\n", a, b, c, d);	
  
  return 0;
}
