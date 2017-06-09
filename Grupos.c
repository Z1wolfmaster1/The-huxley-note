#include <stdio.h>

int main() {
	int a, q, g, g2;
	
	printf("Quantidade de alunos: ");
	scanf("%d", &a);
	printf("\nTamanho do grupo: ");
	scanf("%d", &q);
	printf("\n");
	
	g=a/q;
	g2=a%q;
	
	if(g2==0)
	printf("Quantidade de grupos: %d\n", g);
	
	else if(g2!=0)
	printf("Quantidade de grupos: %d\nGrupo especial com %d alunos\n", g, g2);
	
	return 0;
}
