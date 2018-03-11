#include <stdio.h>
#include <math.h>

int main(void){
	double money,year,rate,interest;
	printf("Enter money, year and rate: ");
	scanf("%lf %lf %lf",&money,&year,&rate);
	
	interest = money*pow(1+rate,year) - money;
	printf("interest=%.2f\n",interest);
	return 0;
	
}
