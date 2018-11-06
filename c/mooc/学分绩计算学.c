#include <stdio.h>

int main(){
	int m,n,l;
	double s;
	printf("Input math1,English and math2:");
	scanf("%d,%d,%d",&m,&n,&l);
	s = (m*5+n*1.5+l*3.5)/10;
	printf("Final score = %.2f\n",s);
	return 0;
}
