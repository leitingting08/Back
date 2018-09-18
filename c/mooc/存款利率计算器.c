#include <stdio.h>
#include <math.h>

int main(){
	double rate,capital,deposit;
	int year;
	printf("Please enter rate, year, capital:\n");
	scanf("%lf,%d,%lf",&rate,&year,&capital);
	deposit = capital*pow((1+rate),year);
	printf("deposit=%.3f\n",deposit );
	return 0;
}