#include<stdio.h>
int main(void){
	int mynumber = 66;
	int yournumber;
	
	printf("input your number:");
	scanf("%d",&yournumber);
	if(yournumber == mynumber)
		printf("OK,you are right!\n");
	else
		if(yournumber>mynumber)
			printf("sorry!your number is bigger than my number!\n");
		else
		    printf("sorry!your number is smaller than my number!\n");
		    
	return 0;
}  
