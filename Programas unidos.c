#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void z();
void m();
void login();
void patinhos();

main() {
	int n;
	
	printf("1. Zerinho ou um\n\n2. Mariana\n\n3. Login\n\n4. 5 patinhos\n\nEscolha: ");
	scanf("%d", &n);
	
	if(n==1) {
	system("cls");
	z();
	}
	
	else if(n==2) {
	system("cls");
	m();
	}
	
	else if(n==3) {
	system("cls");
	login();
	}
	
	else if(n==4) {
		system("cls");
	    patinhos();
	}
	
	else
	printf("\nPrograma inexistente\n");
	
	return 0;
}

void z() {
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

void m() {
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

void login() {
	setlocale(LC_ALL,"");
	char s[100], sc[100]="laranja", l[100], lc[100]="Eduardo";
	
	while(strcmp(l,lc)!=0) {
		printf("Digite o login: ");
	    scanf("%s", l);
		if(strcmp(l,lc)!=0){
		printf("\nLOGIN INCORRETO, TENTE NOVAMENTE!\n\n");
		system("pause");
		system("CLS");
	}
	    else {
	    	system("CLS");
		    while(strcmp(s,sc)!=0) {
	        printf("Olá senhor Eduardo, digite sua senha.\n\nSenha: ");
	        scanf("%s", s);
	        if(strcmp(s,sc)==0)
	        printf("\n\nAcesso Concedido.");
	
	        else {
		        printf("\n\nSENHA INCORRETA, TENTE NOVAMENTE!\n\n");
		        system("pause");
		        system("CLS");
		        }
	        }
	    }
	}
}

void patinhos() {
	int p, i;
	printf("Quantos patinhos foram passear: ");
	scanf("%d", &p);
	
	for(i=p; i>=2; i--) {
		printf("\n%d patinhos foram passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\n mas so %d patinhos voltaram de la\n", i, i-1);
}
    if(p>8000)
	printf("\n1 patinhos foi passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\nmas nenhum patinho voltou de la\n\na mamae patinha foi procurar\nalem das montanhas\nna beira do mar\na mamae gritou: quack, quack, quack, quack\ne os MAIS DE 8000(%d) patinhos voltaram de la\n", p);
	
    else 
	printf("\n1 patinhos foi passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\nmas nenhum patinho voltou de la\n\na mamae patinha foi procurar\nalem das montanhas\nna beira do mar\na mamae gritou: quack, quack, quack, quack\nE os %d patinhos voltaram de la\n", p);

}
