#include <stdio.h>

int main(){
	float m,s;
	printf("Input payment p:");
	scanf("%f",&m);
	s = m*(1-0.08);
	printf("price = %.1f\n",s);
	return 0;
}