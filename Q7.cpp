#include <stdio.h>
 
int main() {
	
	 float x, y;
	 
	 scanf("%f",&x);
	 scanf("%f",&y);
	 
	 //Situa��es do 1 quadrante 
	 if (x>0 && y>0)
	 {
	 	printf("Q1\n");
	 }
	 //Situa��o dos Eixos 
	 else if(x==0 && y>0){   
	 	printf("Eixo Y\n");
		 }
	 else if(x>0 && y==0){
	 	printf("Eixo X\n");
	 }
	 //Pode estar errado
	 else if(x==0 && y<0){
	 	printf("Eixo Y\n");
	 }
	 else if(x<0 && y==0){
	 	printf("Eixo X\n");
	 }
	 
	//Situa��es do 2 quadrante 
	 	else if (x<0 && y>0){
	 		printf("Q2\n");
		 }
		
	//Situa��o do 3 quadrante 
			else if (x<0 && y<0){
				printf("Q3\n");
			}
	//Situa��o do 4 quadrante
				else if (x>0 && y<0){
					printf("Q4\n");
				}
					else if (x==0 && y==0){
						printf("Origem\n");
						}
	 
    return 0;
}
