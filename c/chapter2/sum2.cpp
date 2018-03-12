#include <stdio.h>
int main(void){
	double m,n,i,sum;
	printf("Enter m: ");
	scanf("%lf",&m);
	printf("Enter n: ");
	scanf("%lf",&n);
	sum = 0;
	for(i=m;i<=n;i++){
		sum = sum + 1/i;
	}
	printf("sum=%.3f",sum);
	return 0;
	
} 
