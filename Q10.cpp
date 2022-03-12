#include <stdio.h>
 
int main() {
	
	int n = 1, cont, val;
	
	for (cont=1;cont<=100;cont++){
		val = (n % 2);
		if (val == 0){
			printf("%d\n",n);
		}
		n++;
	}
    return 0;
}
