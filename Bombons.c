#include <stdio.h>
#include <stdlib.h>

int main() {
	float ap, cp, pp, aq, cq, pq, v;
	
	scanf("%f\n%f\n%f\n%f\n%f\n%f", &ap, &cp, &pp, &aq, &cq, &pq);
	v=ap*aq+cp*cq+pp*pq;
	printf("\nValor: R$%.2f", v);
	return 0;
}
