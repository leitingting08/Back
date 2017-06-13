#include <stdio.h>
#define N 5

//书写一个小型的学生成绩管理系统
//录入函数
void input(double[]);
void sort(double[]);
void show(double[]);
int find(double *, int);

void main()
{
    double scores[N];
    double findNum;
    //1。 录入
    input(scores);
    printf("排序前：\n");
    show(scores);
    //2。 排序
    sort(scores);
    //3， 按照某种格式打印
    printf("排序后：\n");
    show(scores);

    printf("请输入要查找的数字：");
    scanf("%lf",&findNum);
    printf("找到的数字下标为：%d\n",find(scores, findNum));
}

int find(double * scores, int  findNum)
{
    int findIndex = -1;
    int i;
    for(i = 0; i < N; i++)
    {
        if(findNum == scores[i])
        {
            findIndex = i;
            break;
        }
        return findIndex;
    }

}
void input(double scores[])
{
    int i;
    for(i = 0; i < N; i++)
    {
        printf("请输入第%d门课的成绩：", i + 1);
        scanf("%lf",&scores[i]);
    }
}
void sort(double scores[])
{
    int i,j;
    double temp;
    for(i = 0; i < N - 1; i++)
    {
        for(j = 0; i < N - i - 1; j++)
        {
            if(scores[j] > scores[j+1])
            {
                temp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = temp;
            }

        }
    }
}
void show(double scores[])
{
    printf("********************************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    int i;
    for(i = 0; i < N; i++)
    {
        printf("%.2lf\t", *(scores + i ));
    }
    printf("\n********************************************\n");
}
