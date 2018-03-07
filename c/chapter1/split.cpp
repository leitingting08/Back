#include <stdio.h>

int main(void){
	int n,digit1,digit2,digit3;
	n=152;
	digit1=n%10;
	digit2=(n/10)%10;
	digit3=n/100;
	printf("整数%d的个位数是%d,十位数是%d,百位数是%d",n,digit1,digit2,digit3);
	return 0;
	
}
