#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
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
