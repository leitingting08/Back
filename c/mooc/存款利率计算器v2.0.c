#include <stdio.h>
#include <math.h>

int main(){
	int n;
	double r,c,d;
	char o;
	printf("Input rate, year, capital:");
	scanf("%lf,%d,%lf",&r,&n,&c);
	printf("Compound interest (Y/N)?");
	scanf(" %c",&o);
	if(o==89||o==121){
		d = c*pow((1+r),n);
		printf("deposit = %.4f\n" ,d );
	}
	if(o==78||o==110){
		d = c*(1+r*n);
		printf("deposit = %.4f\n" ,d );
	}
	return 0;
}