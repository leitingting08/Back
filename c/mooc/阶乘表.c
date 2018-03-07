#include<stdio.h>
/*定义和调用求阶乘函数生成阶乘表*/
double fact(int n);
int main(void)
{
	int i,n;
	double result;
	
	printf("请输入n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		result=fact(i);
		printf("%d=%.0f\n",i,result); 
	}
	return 0;
 } 
 
 /*定义求n!的函数*/
 double fact(int n)
 {
 	int i;
 	double product;
 	
 	product=1;
 	for(i=1;i<=n;i++){
 		product=product*i;
	 }
	 return product;
  } 
