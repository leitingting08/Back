#include <stdio.h>
int main(){
	int x,y,z;
	printf("Man   Women   Children\n");
	for(x=0;x<11;x++){
		z=10+x;
		y=20-2*x;
		printf("%3d%8d%8d\n",x,y,z);
	}
	return 0;
}