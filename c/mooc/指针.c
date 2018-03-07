#include<stdio.h>
int main()
{
    int num = 9;
    int*ptr_num = &num;
    //指针的地址
    int*ptr_num2 = &ptr_num;
    //%p指针占位符，%x 16进制占位符
    printf("num变量的地址是：%p\t%x\n",ptr_num,&num);

    printf("指针pte_num的地址是：%p\n",ptr_num2);
    //使用指针修改变量值
    *ptr_num = 9999;
    printf("*ptr_num对应的值为：%d\n",*ptr_num);
    return 0;
}
