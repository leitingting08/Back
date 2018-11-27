#include <stdio.h>
int main(){
	int y,t,i;
	long time;
	printf("Input your birth year:");
	scanf("%d",&y);
	printf("Input this year:");
	scanf("%d",&t);
	int s = 0;
	for(i=y;i<t;i++){
		if(i%400==0||(i%4==0&&i/100)){
			s++;
		}
	}
	time = 365*24*60*75*(t-y)+s*24*60*75;
	printf("The heart beats in your life: %lu",time);
	return 0;
}