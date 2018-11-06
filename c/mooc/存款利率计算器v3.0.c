#include <stdio.h>
#include <math.h>

int main(){
	int n;
	double r,c,d;
	char o;
	printf("Input capital, year:");
	scanf("%lf,%d",&c,&n);
	printf("Compound interest (Y/N)?");
	scanf(" %c",&o);
	switch(n){
		case 1:
		r = 0.0225;
		break;
		case 2:
		r = 0.0243;
		break;
		case 3:
		r = 0.0270;
		break;
		case 5:
		r = 0.0288;
		break;
		case 8:
		r = 0.0300;
		break;
		default: 
		r = 0;
		break;
	}
	if(r==0){
		printf("Error year!");
	}
	if(o==89||o==121){
		d = c*pow((1+r),n);
		printf("rate = %.4f, deposit = %.4f\n" ,r,d );
	}
	if(o==78||o==110){
		d = c*(1+r*n);
		printf("rate = %.4f, deposit = %.4f\n" ,r,d );
	}
	return 0;
}