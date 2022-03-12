#include <stdio.h>

main(){
	
	int X, Y;
	
	scanf("%d",&X);
	scanf("%d",&Y);
	
	while(X!=Y){
		if (X<Y){
			printf("Crescente\n");
		}
			else if(X>Y){
				printf("Decrescente\n");
			}
	scanf("%d",&X);
	scanf("%d",&Y);		
	}	
	return 0;
	
}
