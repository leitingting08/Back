#include<stdio.h>
#include<stdlib.h> //标准库
#include<time.h>  //time()
#include<windows.h> //Sleep()
int main()
{
    //rand()函数的取值范围是0-32767
    srand(time(NULL));
    printf("随机数字：%d\n",rand());
    /*
    使用循环模拟玩家对战
    双方初始hp均为100
    每次攻击5-15
    hp最先到零或以下的被ko
    */
    int hp1 = 100,hp2 = 100;
    int att1, att2;
    int i = 0;
    while(hp1>=0&&hp2>=0)
        {
            //默认1p首先攻击
            att1 = rand() % 11 + 5;
            att2 = rand() % 11 + 5;
            //玩家1攻击，玩家2掉血
            hp2 -= att1;
            //玩家2攻击，玩家1掉血
            hp1 -= att2;
            printf("**********************************\n");
            printf("第%d轮： \n", i + 1);
            printf("玩家1攻击力：%d，玩家2剩余血量：%d\n", att1, hp2);
            printf("玩家2攻击力：%d，玩家1剩余血量：%d\n", att2, hp1);
            printf("**********************************\n");
            i++;
            Sleep(1000);
        }
        printf("KO!游戏结束，玩家1的血量是%d\n，玩家2的血量是%d\n",hp1,hp2);
}
