#include <stdio.h>
#include <stdlib.h>

//自行实现pow函数
double power(double, int); //h函数原型

int main()
{
    //实际参数 - 调用
    printf("%d的%d次幂等于：%.2lf", 8, 4, power(8,4));
    return 0;
}
double power(double num1, int num2)//函数定义
{
    double result = 1;
    int i;
    for(i=0;i<num2;i++)
    {
        result *= num1;
    }
    return result;

}
