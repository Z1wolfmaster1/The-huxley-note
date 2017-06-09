#include <stdio.h>

int main() {
	
	int m;
	
	scanf("%d", &m);
	
	if(m==1)
	printf("janeiro");
	
	if(m==2)
	printf("fevereiro");
	
	if(m==3)
	printf("marco");
	
	if(m==4)
	printf("abril");
	
	if(m==5)
	printf("maio");
	
	if(m==6)
	printf("junho");
	
	if(m==7)
	printf("julho");
	
	if(m==8)
	printf("agosto");
	
	if(m==9)
	printf("setembro");
	
	if(m==10)
	printf("outubro");
	
	if(m==11)
	printf("novembro");
	
	if(m==12)
	printf("dezembro");
	
	else if((m<=0) || (m>=13))
	printf("invalido");
	
	return 0;
}
