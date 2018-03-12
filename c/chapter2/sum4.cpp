#include <stdio.h>
int main(void){
	int k=1;
	double n,i,sum;
	printf("Enter n: ");
	scanf("%lf",&n);
	sum = 0;
	for(i=1;i<=3*n;i=i+3){
		sum = sum + 1/i*k;
		k=-k;
	}
	printf("sum=%.3f",sum);
	return 0;
	
} 
