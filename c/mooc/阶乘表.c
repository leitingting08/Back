#include<stdio.h>
/*����͵�����׳˺������ɽ׳˱�*/
double fact(int n);
int main(void)
{
	int i,n;
	double result;
	
	printf("������n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		result=fact(i);
		printf("%d=%.0f\n",i,result); 
	}
	return 0;
 } 
 
 /*������n!�ĺ���*/
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
