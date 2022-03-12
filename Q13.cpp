#include <stdio.h>
 
int main() {

	int N, cont=1,valres;
	
	scanf("%d",&N);
	for(cont=1;cont<=10000;cont++){
		valres = (cont % N);
		if (valres == 2){
			printf("%d\n",cont);
		}			
	}
    return 0;
}
