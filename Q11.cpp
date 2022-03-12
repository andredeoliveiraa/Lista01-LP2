#include <stdio.h>
 
int main() {
	
	float val1, val2, val3, val4, val5, val6;
	int contp1, contp2, contp3, contp4, contp5, contp6, contt;
	scanf("%f %f %f %f %f %f", &val1, &val2, &val3, &val4, &val5, &val6);
	if (val1>0){
			contp1 = 1;
		}
		else{
			contp1 = 0;
		}
	if(val2>0){
			contp2 = 1;
		}
		else {
			contp2 = 0;
		}
	if(val3>0){
			contp3 = 1;	
		}
		else{
			contp3 = 0;
		}
	if(val4>0){
			contp4 = 1;
		}
		else{
			contp4 = 0;
		}
					 
	if(val5>0){
			contp5 = 1;
		}
		else{
			contp5 = 0;	
		}
	if(val6>0){
			contp6 = 1;
		}
		else{
			contp6 =0;
		}
	
	contt = (contp1 + contp2 + contp3 + contp4 + contp5 + contp6);
	printf("%d valores positivos\n",contt);
	
    return 0;
}
