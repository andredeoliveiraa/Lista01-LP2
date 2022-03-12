#include <stdio.h>
 
int main() {
	
	int cont, ma = 0, pos, val, val2; 
	
	for(cont=1;cont<=100;cont++){
	scanf("%d",&val);
	if (ma<val){
		ma = val;
		val2 = cont;	
	}
	}
	printf("%d\n",ma);
	printf("%d\n",val2);
    return 0;
}
