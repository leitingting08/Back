#include <stdio.h>
#include <math.h>

int main(){
	int h1,m1,h2,m2,s1,s2;
	printf("Input time one(hour, minute):");
	scanf("%d,%d",&h1,&m1);
	printf("Input time two(hour, minute):");
	scanf("%d,%d",&h2,&m2);
	if((h1>=h2 && m1>=m2) || (h1<=h2 && m1<=m2)){
		s1 = abs(h1-h2);
		s2 = abs(m1-m2);
	}
	else if(h1<h2 && m1>m2){
		s1 = abs(h1-h2)-1;
		s2 = m2+60-m1;
	}
	else if(h1>h2 && m1<m2){
		s1 = abs(h1-h2)-1;
		s2 = m1+60-m2;
	}
	printf("%d hour %d minute\n",s1,s2);
	return 0;
}