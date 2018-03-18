#include <stdio.h>

	int main(void){
		int n,m,a1,a2,a3,a4,b1,b2,b3,b4;
		printf("Enter a number: ");
		scanf("%d",&m);
	    a1 = m/1000;
	    a2 = (m/100)%10;
	    a3 = (m/10)%100;
	    a4 = m%1000;
	    
	    b1 = (a1+9)%10;
	    b2 = (a2+9)%10;
	    b3 = (a3+9)%10;
	    b4 = (a4+9)%10;
	    
	    n = b3*1000+b4*100+b1*10+b2;
	    printf("The encrypted number is %d",n);
	    return 0;
	} 
