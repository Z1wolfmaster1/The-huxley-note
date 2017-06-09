#include <stdio.h>

int main() {
	int Cv, Ce, Cs, Fv, Fe, Fs, Ct, Ft;
	
	scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
	
	Ct=(Cv*3)+Ce;
	Ft=(Fv*3)+Fe;
	
	if(Ct>Ft)
	printf("C");
	
	else if(Ft>Ct)
	printf("F");
		    
	else {
	if(Cs>Fs)
	printf("C");
	else if(Fs>Cs)
	printf("F");
		            
	else if(Ct==Ft&&Cs==Fs)
	printf("=");
	}
	return 0;
}
