#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,a,b,c,f;
    scanf("Input x:%d\n",&x);
    f = abs(x);
    a = f/100;
    b = (f%100)/10;
    c = (f%100)%10;
    y = c * 100 + b * 10 + a;
    printf("y=%d\n",f);
    return 0;
}