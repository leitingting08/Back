#include <stdio.h>
#include <stdlib.h>

//����ʵ��pow����
double power(double, int); //h����ԭ��

int main()
{
    //ʵ�ʲ��� - ����
    printf("%d��%d���ݵ��ڣ�%.2lf", 8, 4, power(8,4));
    return 0;
}
double power(double num1, int num2)//��������
{
    double result = 1;
    int i;
    for(i=0;i<num2;i++)
    {
        result *= num1;
    }
    return result;

}
