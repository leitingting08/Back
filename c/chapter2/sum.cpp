#include <stdio.h>
int main(void){
	int m,i,sum;
	printf("Enter m: ");
	scanf("%d",&m);
	sum = 0;
	for(i=m;i<=100;i++){
		sum = sum + i;
	}
	printf("sum=%d",sum);
	return 0;
	
} 
