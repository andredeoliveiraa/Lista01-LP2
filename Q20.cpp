#include <stdio.h>

int main (){

    short ncasas, cont1, cont2, cont3;

    while (scanf("%hu", &ncasas) != EOF) 
    {

        for (cont1 = 0; cont1 < ncasas; cont1 += 2)
        {
            for (cont2 = 0; cont2 < (ncasas - cont1) / 2; cont2++)
                printf(" ");

            for (cont3 = cont1; cont3 >= 0; cont3--)
                printf("*");

            printf("\n");

        }
		
		//Apresentação da base da arvore 
		
        for (cont1 = 0; cont1 < ncasas/2; cont1++)
            printf(" ");
        printf("*\n");

        for (cont1 = 1; cont1 < ncasas/2; cont1++)
            printf(" ");

        printf("***\n\n");

    }
}
