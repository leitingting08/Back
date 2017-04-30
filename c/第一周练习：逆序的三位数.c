#include <stdio.h>

int main()
{
	int m,a,b,c,t;
	scanf("%d", &m); 
	a = m/100;
	b = (m-a*100)/10;
	c = m-a*100-b*10;
	t = c*100 + b*10 + a;	
	printf("%d", t);
	
	return 0;
 } 
