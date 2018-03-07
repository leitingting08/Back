#include<stdio.h>
#define N 5//宏定义，是常量，不可改变他的值
int main()
{
    /*
    删除的逻辑
    12 34 23 67 9
    12 34 67 9 9
    1、查找要删除数字的下标2
    2、从下标开始，后面一个覆盖前面一个数字
    3、数组的总长度-1
    */
    int count = 5;
    double powers[] = {42322,45771,40907,41234,40767};
    double deletePower; //用户要删除的战力值
    int deleteIndex = -1; //要删除战力值的下标，给一个不可能的初值，方便判断
    double insertPower;
    int i;
    printf("请输入要删除的战力值：");
    scanf("%lf",&deletePower);
    for(i=0;i<count;i++)
    {
        if(deletePower == powers[i])
        {
            //记录下当前的下标
            deleteIndex = i;
            break;//找到了要删除的战力值，直接跳出循环，提升效率
        }
    }
    if(-1 == deleteIndex)
    {
        printf("很遗憾，没有找到要删除的战力值，删除失败！\n");
    }
    else
    {

        for(i = deleteIndex;i<count-1;i++)
        {
            powers[i] = powers[i+1];
        }
        count--;
    }
    printf("删除后的结果为：\n");
    for(i = 0;i < count; i++)
    {
        printf("%.2lf\t", powers[i]);
    }
    //删除后进行插入
    printf("请输入新战力值：");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    count++;
    printf("输入后的结果为：");
    for(i = 0;i < count;i++)
    {
        printf("%.2lf\t", powers[i]);
    }
}
