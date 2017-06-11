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
    char names[MAX][20] = {"貂蝉","杨玉环","西施","赵飞燕","昭君","甄嬛"};
    char levelNames[5][10] = {"贵人","嫔妃","贵妃","皇贵妃","皇后"};
    int levels[MAX] = {1,2,0,0,0,-1};
    int loves[MAX] = {100,100,100,100,100,-1};
    printf("********************************************\n");
    printf("查看当前嫔妃的状态：\n");
    printf("%-12s    级别\t好感度\n","姓名");
    for(i=0;i<count;i++)
    {
        printf("%-12s\t%s\t%d\n", names[i], levelNames[i],  loves[i]);
    }
    printf("********************************************\n");

    printf("1、皇帝下旨选妃：\t\t（增加功能）\n");
    printf("2、翻牌宠幸：\t\t（修改状态功能）\n");
    printf("3、打入冷宫！\t\t（删除功能）\n");
    printf("4、召见爱妃谈心：\n");
    printf("陛下请选择：");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        if(count < MAX)
        {
            printf("请输入娘娘名讳：");
            scanf("%s", names[count]);
            levels[count] = 0;
            loves[count] = 0;
            count++;
        }
        else
        {
            printf("添加失败！后宫已满！\n");
        }
        break;
    case 2:
        printf("陛下，请输入今天要翻牌娘娘名讳：");
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
        printf("陛下，请输入打入冷宫的娘娘名讳：");
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
            printf("虚惊一场，无人打入冷宫，该吃吃，该喝喝！\n");
        }
        else
        {
            for(i=searchIndex;i<count-1;i++)
            {
                strcpy(names[i], names[i+1]);//strcpy 进行赋值
                strcpy(loves[i],loves[i+1]);
                strcpy(levels[i] ,levels[i+1]);

            }
            count--;
        }
        break;
    case 4:
        break;
    default:
        printf("君无戏言！陛下请再次确认！");
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
    printf("查看当前嫔妃的状态：\n");
    printf("%-12s    级别\t好感度\n","姓名");
    for(i=0;i<count;i++)
    {
        printf("%-12s\t%s\t%d\n", names[i], levelNames[i],  loves[i]);
    }
    printf("********************************************\n");
    return 0;
}
