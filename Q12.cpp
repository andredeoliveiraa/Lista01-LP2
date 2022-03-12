#include <stdio.h>
 
int main() {
	
	int quant, cont,valx,in=0,out=0;
	
	scanf("%d",&quant);
	for(cont=1;cont<=quant;cont++){
		scanf("%d",&valx);
		if (valx>=10 && valx<=20){
			in=in+1;
		}	
		else
			out=out+1;
	}
	printf("%d in\n%d out\n",in,out);
	
    return 0;
}
