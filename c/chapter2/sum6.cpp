#include <stdio.h>
int main(void){
	int n,x,i,sum;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter n: ");
	scanf("%d",&n);
	sum = 1;
	for(i=1;i<=n;i++){
		sum = sum*x;
	}
	printf("%d��%d!�η���%d",x,n,sum);
	return 0;
	
} 
