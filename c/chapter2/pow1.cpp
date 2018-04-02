#include <stdio.h>
int pow(int m,int n);
int main(void){
	int i,m,n,result;
	m=3;
	printf("Enter n: ");
	scanf("%d",&n);
	 printf("pow(3,0)=%d\n",1);
	i=1;
	result=pow(m,i);
	for(i=1;i<=n;i++)
	   printf("pow(3,%d)=%d\n",i,result);
	return 0;
}

int pow(int m,int n){
	int i;
	m=3;
	int result;
	result=1;
	for(i=1;i<=n;i++)
		result=result*3;
	return result;
}
