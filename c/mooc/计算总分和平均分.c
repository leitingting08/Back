#include <stdio.h>

int main(){
	float average,total;
	total = (86+74+92+77+82)*0.3+(81+87+90+62+88)*0.7;
	average = total/5;
	int Average = (int)average;
	printf("total=%.2f\n", total);
	printf("average=%.2f\n", average);
	printf("average=%d\n", Average);
	return 0;
}