#include <stdio.h>
 
int main() {
    
    int A, B, PROD;
    
	scanf("%d",&A);
	scanf("%d",&B);
	
	PROD = (A*B);
	
	printf("PROD = %d\n",PROD);
    
    return 0;
}



	if (media >= 7){
		printf("Media: %.2f\n");
		printf("Aluno aprovado.\n");
	}
		else if(media<5){
				printf("Media: %.2f\n");
				printf("Aluno reprovado.\n");
			}
			else if (media >= 5 && media <=6.9){
				printf("Aluno em exame.\n");
				printf("Nota do exame: %.2f",media);
				mf = ((media+media)/2);
			}
				if (mf >= 5){
					printf("Aluno aprovado.\n");
					printf("Media final: %.2f\n",mf);	
				}
