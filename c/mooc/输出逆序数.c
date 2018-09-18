#include<stdio.h>
#include<math.h>
main()
{
	int x,a,b,c,y; 
	printf("Input x:\n" );
	scanf("%d",&x);            
	a=fabs(x/100); 
	if(x>0) b=fabs((x-a*100)/10); 
	if(x<0) b=fabs(x+a*100)/10; 
	c=fabs(x%10);                   
	y=fabs(c*100+b*10+a);                 
	printf("y=%d\n",y);        
    return 0;
}