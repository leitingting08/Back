#include<stdio.h>
#include<stdlib.h> //��׼��
#include<time.h>  //time()
#include<windows.h> //Sleep()
int main()
{
    //rand()������ȡֵ��Χ��0-32767
    srand(time(NULL));
    printf("������֣�%d\n",rand());
    /*
    ʹ��ѭ��ģ����Ҷ�ս
    ˫����ʼhp��Ϊ100
    ÿ�ι���5-15
    hp���ȵ�������µı�ko
    */
    int hp1 = 100,hp2 = 100;
    int att1, att2;
    int i = 0;
    while(hp1>=0&&hp2>=0)
        {
            //Ĭ��1p���ȹ���
            att1 = rand() % 11 + 5;
            att2 = rand() % 11 + 5;
            //���1���������2��Ѫ
            hp2 -= att1;
            //���2���������1��Ѫ
            hp1 -= att2;
            printf("**********************************\n");
            printf("��%d�֣� \n", i + 1);
            printf("���1��������%d�����2ʣ��Ѫ����%d\n", att1, hp2);
            printf("���2��������%d�����1ʣ��Ѫ����%d\n", att2, hp1);
            printf("**********************************\n");
            i++;
            Sleep(1000);
        }
        printf("KO!��Ϸ���������1��Ѫ����%d\n�����2��Ѫ����%d\n",hp1,hp2);
}
