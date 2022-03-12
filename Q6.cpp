#include <stdio.h>
 
int main() {
	
	float N1, N2, N3, N4, media, exame, mf;
	
	scanf("%f",&N1);	
	scanf("%f",&N2);
	scanf("%f",&N3);
	scanf("%f",&N4);
	
	media =(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10);
	
	if (media >= 7){
		printf("Media: %.1f\n",media);
		printf("Aluno aprovado.\n");
	}
		else if(media<5){
				printf("Media: %.1f\n",media);
				printf("Aluno reprovado.\n");
			}
			else if (media >= 5 && media <=6.9){
					scanf("%f",&exame);
					mf = ((media+exame)/2);	
					if (mf>=5){
						printf("Media: %.1f\n",media);
						printf("Aluno em exame.\n");
						printf("Nota do exame: %.1f\n",exame);
						printf("Aluno aprovado.\n");
						printf("Media final: %.1f\n",mf);			
					}
					else {
						printf("Media: %.1f\n",media);
						printf("Aluno em exame.\n");
						printf("Nota do exame: %.1f\n",exame);
						printf("Aluno Reprovado.\n");
						printf("Media final: %.1f\n",mf);	
					}
					}						
    return 0;
}

