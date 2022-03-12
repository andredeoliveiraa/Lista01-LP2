#include <stdio.h>
 
int main() {
	
	int N, contt=0,res, cont;
	scanf("%d",&N);
	for(cont=1;cont<=10;cont++){
		res=(cont*N);
		contt++;
		printf("%d x %d = %d\n",contt,N,res);			
	}
    return 0;
}
