#include <stdio.h>

int main() {
	int Cv, Ce, Cs, Fv, Fe, Fs;
	
	scanf("%d%d%d%d%d%d", &Ce, &Cv, &Cs, &Fv, &Fe, &Fs);
	
	Cv=Cv*3;
	Fv=Fv*3;
	
	if(Cv+Ce>Fv+Fe)
	printf("C");
	
	else if(Cv+Ce<Fv+Fe)
	printf("F");
	
	else if(Cv+Ce==Fv+Fe) {
		if(Cs>Fs)
		printf("C");
		
		else if(Cs<Fs)
		printf("F");
		
		else if(Cs==Fs)
		printf("=");
	}
	
    
	return 0;
}

