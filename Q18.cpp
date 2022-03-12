#include <stdio.h>

main(){
	
	int cont=1, N, X, Y;
	float val;
	
	scanf("%d",&N);
	for(cont;cont<=N;cont++){
		scanf("%d",&X);
		scanf("%d",&Y);
		if (Y == 0){
			printf("divisao impossivel\n");
		}
			else{
				val =(float)X/Y;
				printf("%.1f\n",val);
			}		
	}
	return 0;	
}
