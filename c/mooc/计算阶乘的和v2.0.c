#include <stdio.h>
long Fact(int n);

int main(){
	int m,a,b,c;
	long s;
	for(a=1;a<10;a++){
		for(b=1;b<10;b++){
		    for(c=1;c<10;c++){
			   m = 100*a+10*b+c;
			   s = Fact(a)+Fact(b)+Fact(c);
			   if(m==s){
					printf("%d\n",m);
				}
			}
		}
	}
	return 0;
}

long Fact(int n){
	if(n==1){
		return 1;
	}else{
		return n*Fact(n-1);
	}
}

