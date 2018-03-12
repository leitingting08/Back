#include <stdio.h>
int main(void){
	double n,i,sum;
	printf("Enter n: ");
	scanf("%lf",&n);
	sum = 0;
	for(i=1;i<=2*n;i=i+2){
		sum = sum + 1/i;
	}
	printf("sum=%.6f",sum);
	return 0;
	
} 
