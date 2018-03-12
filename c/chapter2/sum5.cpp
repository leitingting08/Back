#include <stdio.h>
int main(void){
	int m,n,i,j,sum,sum1,sum2;
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter n: ");
	scanf("%d",&n);
	sum = 1;
	sum1 = 1;
	sum2 = 1;
	for(i=1;i<=m;i++){
		sum1 = sum1*i;
	}
	for(j=1;j<=n;j++){
		sum2 = sum2*j;
	}
	sum=sum1+sum2;
	printf("%d!+%d!=%d",m,n,sum);
	return 0;
	
} 
