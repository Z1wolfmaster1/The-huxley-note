#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int i, e, j;
	printf("Quanto conta Mariana: ");
	scanf("%d", &e);
	printf("\n");
	for(i=1; i<=e; i++) {
		printf("Mariana conta %d\nMariana conta %d: ", i, i);
		for(j=1;j<=i; j++) {
			printf("é %d, ",j);
		}
		printf("é!\nAna Viva Mariana, viva a Mariana\n");
	}
}
