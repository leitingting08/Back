#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float m,s;
	printf("Input length and days:");
	scanf("%f,%d",&m,&n);
	s = m/pow(2,n);
	printf("length=%.5f\n",s);
	return 0;
}