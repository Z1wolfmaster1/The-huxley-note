#include <stdio.h>
#include <stdlib.h>

int main() {
	double n1, n2, n3, m;
	
	printf("Informe a primeira nota: ");
	scanf("%lf", &n1);
	printf("Informe a segunda nota: ");
	scanf("%lf", &n2);
	printf("Informe a terceira nota: ");
	scanf("%lf", &n3);
	
	m=(n1+n2+n3)/3;
	
	if(m>=7)
	printf("Aprovado com media %lf", m);
	
	else{
		if(m>=5&&m<7)
		printf("Recuperacao com media %lf", m);
		
		else{
			if(m<5)
			printf("Reprovado com media %lf", m);
		}
	}
	return 0;
}
