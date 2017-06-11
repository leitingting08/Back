#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define MAX 6
#include <string.h>

int main()
{
    int count = 5;
    int i,j,temp;
    int choice;
    int searchIndex = -1;
    char tempName[20];
    char names[MAX][20] = {"����","����","��ʩ","�Է���","�Ѿ�","���"};
    char levelNames[5][10] = {"����","����","����","�ʹ���","�ʺ�"};
    int levels[MAX] = {1,2,0,0,0,-1};
    int loves[MAX] = {100,100,100,100,100,-1};
    printf("********************************************\n");
    printf("�鿴��ǰ������״̬��\n");
    printf("%-12s    ����\t�øж�\n","����");
    for(i=0;i<count;i++)
    {
        printf("%-12s\t%s\t%d\n", names[i], levelNames[i],  loves[i]);
    }
    printf("********************************************\n");

    printf("1���ʵ���ּѡ����\t\t�����ӹ��ܣ�\n");
    printf("2�����Ƴ��ң�\t\t���޸�״̬���ܣ�\n");
    printf("3�������乬��\t\t��ɾ�����ܣ�\n");
    printf("4���ټ�����̸�ģ�\n");
    printf("������ѡ��");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        if(count < MAX)
        {
            printf("�������������䣺");
            scanf("%s", names[count]);
            levels[count] = 0;
            loves[count] = 0;
            count++;
        }
        else
        {
            printf("���ʧ�ܣ���������\n");
        }
        break;
    case 2:
        printf("���£����������Ҫ�����������䣺");
        scanf("%s", &tempName);
        for(i=0;i<count;i++)
        {
            if(strcmp(tempName, names[i]) == 0)
            {
                loves[i] += 10;
                levels[i] = levels[i] >= 4 ? 4:levels[i] + 1;
            }
            else
            {
                loves[i] -= 10;
            }
        }

        break;
    case 3:
        printf("���£�����������乬���������䣺");
        scanf("%s", &tempName);
        for(i=0;i<count;i++)
        {
            if(strcmp(tempName, names[i]) == 0)
            {
                searchIndex = i;
            }
        }
        if(-1 == searchIndex)
        {
            printf("�龪һ�������˴����乬���óԳԣ��úȺȣ�\n");
        }
        else
        {
            for(i=searchIndex;i<count-1;i++)
            {
                strcpy(names[i], names[i+1]);//strcpy ���и�ֵ
                strcpy(loves[i],loves[i+1]);
                strcpy(levels[i] ,levels[i+1]);

            }
            count--;
        }
        break;
    case 4:
        break;
    default:
        printf("����Ϸ�ԣ��������ٴ�ȷ�ϣ�");
    }

    for(i=0;i<count-1;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            if(levels[j]<levels[j+1])
            {
                temp = levels[j];
                levels[j] = levels[j+1];
                levels[j+1] = temp;
                temp = loves[j];
                loves[j] = loves[j+1];
                loves[j+1] = temp;
                strcpy(tempName,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempName);
            }
        }
    }
    printf("********************************************\n");
    printf("�鿴��ǰ������״̬��\n");
    printf("%-12s    ����\t�øж�\n","����");
    for(i=0;i<count;i++)
    {
        printf("%-12s\t%s\t%d\n", names[i], levelNames[i],  loves[i]);
    }
    printf("********************************************\n");
    return 0;
}
