#include <stdio.h>
#include <math.h>

int main(void){
	double x,y;
	printf("Enter x:");
	scanf("%lf",&x);
	if(x<0)
	y=pow(x+1,2)+2*x+1/x;
	else
	y=sqrt(x);
	printf("f(%.2f)=%.2f\n",x,y);
	return 0;
	
}
