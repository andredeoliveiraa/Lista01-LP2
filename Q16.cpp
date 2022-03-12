#include <stdio.h>
 
int main() {
	
	int N, X, Y, cont, val, soma=0, somat=0;

	scanf("%d",&N);
	
	for(cont=1;cont<=N;cont++){
		scanf("%d",&X);
		scanf("%d",&Y);
		if (X<Y){
			X=X+1;
			somat = 0, soma=0;
			for(X;X<Y;X++){
				val = (X % 2);
				if (val != 0){
					soma = X; //(10 a 14) 11+13
					somat = (somat + soma);//11+13	
				}						
		}
		printf("%d\n",somat);
		}
		else if(X>Y)  {
				Y=Y+1;
				somat = 0, soma=0;
			for(Y;Y<X;Y++){
				val = (Y % 2);
				if(val != 0){
					soma = Y; //(10 a 14) 11+13
					somat = (somat + soma);
							}	
						}
			printf("%d\n",somat);
		}	
		else if(X=Y){
			somat = 0;
			printf("%d\n",somat);
			
		}
			
			}
	
    return 0;
}
