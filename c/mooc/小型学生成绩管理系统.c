#include <stdio.h>
#define N 5

//��дһ��С�͵�ѧ���ɼ�����ϵͳ
//¼�뺯��
void input(double[]);
void sort(double[]);
void show(double[]);
int find(double *, int);

void main()
{
    double scores[N];
    double findNum;
    //1�� ¼��
    input(scores);
    printf("����ǰ��\n");
    show(scores);
    //2�� ����
    sort(scores);
    //3�� ����ĳ�ָ�ʽ��ӡ
    printf("�����\n");
    show(scores);

    printf("������Ҫ���ҵ����֣�");
    scanf("%lf",&findNum);
    printf("�ҵ��������±�Ϊ��%d\n",find(scores, findNum));
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
        printf("�������%d�ſεĳɼ���", i + 1);
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
    printf("����\t��ѧ\tӢ��\t����\t��ѧ\n");
    int i;
    for(i = 0; i < N; i++)
    {
        printf("%.2lf\t", *(scores + i ));
    }
    printf("\n********************************************\n");
}
