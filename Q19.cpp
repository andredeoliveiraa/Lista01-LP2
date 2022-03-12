#include <stdio.h>

main(){
	
	//int Ntestes, cont1=1, cont2=2, Ncasas, temp=1; 
	
	int Ntestes, cont1=1, cont2=2, Ncasas;
	
	unsigned long long val=1, acum, temp=1, kg, gra;
	
	//double acum, kg, gra, val=1;     ---- unsigned long long 
	
	scanf("%d",&Ntestes);
	for (cont1=1;cont1<=Ntestes;cont1++){
		scanf("%d",&Ncasas);
		for (cont2=2;cont2<=Ncasas;cont2++){
			val = val*2;
			temp = (temp+val);
			acum = temp;
			//Conversão para g e kg 		
		}
			kg = ((acum/12)*0.001);
			//gra = acum/12;
			//kg = gra/1000;
			printf("%.1llu kg\n",kg);	
			cont2=2; 
			val=1; 
			temp=1;
	
	}
	return 0;
}
