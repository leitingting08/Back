#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    //外层循环控制行，内层循环控制列
    for (i = 0;i<4; i++)
        {
            for(j = 0;j<=2-i;j++)
            {
                printf(" ");
            }
            for(j = 0; j <= 2*i ; j++)
            {
                printf("%c",'*');
            }
             printf("\n");
        }
    for (i = 0;i<3; i++)
        {
            for(j = 0;j<= i;j++)
            {
                printf(" ");
            }
            for(j = 0; j <= 4-2*i ; j++)
            {
                printf("%c",'*');
            }
             printf("\n");
    }
    return 0;
}
