#include<stdio.h>
#define N 5
/*
ð�����򣺱����뽻��
ĳ������С�ں�������֣���ô�ͽ���
��һ�ֱȽ�
1   25 16 9 90 23
2   25 16 9 90 23
3   25 16 90 9 23
4   25 16 90 23 9
1����Ҫ�Ƚ϶��֣����鳤��-1�֣�
2��ÿһ�ֱȽϵĴ�������һ��-1�����鳤��-1-��ǰ����
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
printf("����Ľ���ǣ�\n");
for(i = 0;i < N; i++)
{
    printf("%d\t", nums[i]);
}
}

