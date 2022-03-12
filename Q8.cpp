#include <stdio.h>
 
int main() {
	
	int x, y, z, val1, val2, val3;
	
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	val1 = x, val2= y, val3=z;
	
		// x y z caso 1 
	if ((x>=y && x>=z) && (y>=z)) 
	{
		printf("%d\n",z);
		printf("%d\n",y);
		printf("%d\n\n",x);
		//valor entrado
		printf("%d\n",val1);
		printf("%d\n",val2);
		printf("%d\n",val3);
	}
	/// x z y caso 2
	else if ((x>=y && x>=z) && (z>=y))
	{
		printf("%d\n",y);
		printf("%d\n",z);
		printf("%d\n\n",x);
		//valor entrado
		printf("%d\n",val1);
		printf("%d\n",val2);
		printf("%d\n",val3);
	}
		/// y x z caso 3 
	else if ((y>=x && y>=z) && (x>=z))
	{
		printf("%d\n",z);
		printf("%d\n",x);
		printf("%d\n\n",y);
		//valor entrado
		printf("%d\n",val1);
		printf("%d\n",val2);
		printf("%d\n",val3);
	}
		/// y z x caso 4 
	else if ((y>=x && y>=z) && (z>=x)) 
	{
		printf("%d\n",x);
		printf("%d\n",z);
		printf("%d\n\n",y);
		//valor entrado
		printf("%d\n",val1);
		printf("%d\n",val2);
		printf("%d\n",val3);
	}
	
		/// z x y caso 5 
	else if ((z>=x && z>=y) && (x>=y))
	{
		printf("%d\n",y);
		printf("%d\n",x);
		printf("%d\n\n",z);
		//valor entrado
		printf("%d\n",val1);
		printf("%d\n",val2);
		printf("%d\n",val3);
	}
	
		/// z y x caso 6 001
	else if ((z>=x && z>=y) && (y>=x)) 
	{
		printf("%d\n",x);
		printf("%d\n",y);
		printf("%d\n\n",z);
		//valor entrado
		printf("%d\n",val1);
		printf("%d\n",val2);
		printf("%d\n",val3);
	}

    return 0;
}
