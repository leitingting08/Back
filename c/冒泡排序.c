#include<stdio.h>
#define N 5
/*
冒泡排序：遍历与交换
某个数字小于后面的数字，那么就交换
第一轮比较
1   25 16 9 90 23
2   25 16 9 90 23
3   25 16 90 9 23
4   25 16 90 23 9
1、需要比较多轮（数组长度-1轮）
2、每一轮比较的次数比上一轮-1，数组长度-1-当前轮数
*/
int main()
{
  int i, j;
int temp;
int nums[N] = {16, 25, 9, 90, 23};
for(i = 0; i < N - 1; i++)
{
  for(j = 0; j < N - i - 1; j++)
    {
        if(nums[j]<nums[j+1])
        {
            temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp;
        }

    }
}
printf("排序的结果是：\n");
for(i = 0;i < N; i++)
{
    printf("%d\t", nums[i]);
}
}

