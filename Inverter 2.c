#include <stdio.h>

int main() {
  int n, d1, d2;

  scanf("%d", &n);

  d1 = (n / 10);
  d2 = (n % 10);
    
  if(d2==0)
  printf("%d", d1);
  
  else if(d1!=0)
  printf("%1d%1d", d2, d1);
  
  return 0;

}
