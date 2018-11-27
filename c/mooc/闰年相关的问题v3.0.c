#include <stdio.h>
int main(){
	int y,t,i;
	printf("Input your birth year:");
	scanf("%d",&y);
	printf("Input this year:");
	scanf("%d",&t);
	int s = 0;
	for(i=y;i<t+1;i++){
		if(i%400==0||(i%4==0&&i/100)){
			printf("%d\n",i);
			s++;
		}
	}
	printf("count=%d\n",s);
	return 0;
}