#include<stdio.h>
#define N 5//�궨�壬�ǳ��������ɸı�����ֵ
int main()
{
    /*
    ɾ�����߼�
    12 34 23 67 9
    12 34 67 9 9
    1������Ҫɾ�����ֵ��±�2
    2�����±꿪ʼ������һ������ǰ��һ������
    3��������ܳ���-1
    */
    int count = 5;
    double powers[] = {42322,45771,40907,41234,40767};
    double deletePower; //�û�Ҫɾ����ս��ֵ
    int deleteIndex = -1; //Ҫɾ��ս��ֵ���±꣬��һ�������ܵĳ�ֵ�������ж�
    double insertPower;
    int i;
    printf("������Ҫɾ����ս��ֵ��");
    scanf("%lf",&deletePower);
    for(i=0;i<count;i++)
    {
        if(deletePower == powers[i])
        {
            //��¼�µ�ǰ���±�
            deleteIndex = i;
            break;//�ҵ���Ҫɾ����ս��ֵ��ֱ������ѭ��������Ч��
        }
    }
    if(-1 == deleteIndex)
    {
        printf("���ź���û���ҵ�Ҫɾ����ս��ֵ��ɾ��ʧ�ܣ�\n");
    }
    else
    {

        for(i = deleteIndex;i<count-1;i++)
        {
            powers[i] = powers[i+1];
        }
        count--;
    }
    printf("ɾ����Ľ��Ϊ��\n");
    for(i = 0;i < count; i++)
    {
        printf("%.2lf\t", powers[i]);
    }
    //ɾ������в���
    printf("��������ս��ֵ��");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    count++;
    printf("�����Ľ��Ϊ��");
    for(i = 0;i < count;i++)
    {
        printf("%.2lf\t", powers[i]);
    }
}
