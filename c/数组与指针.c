#include<stdio.h>
int main()
{
    int i,j;
    double score[5][3] = {
    {55,66,77},
    {56,67,78},
    {53,65,70},
    {55,69,77},
    {55,66,79},
    };
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            //printf("%.2lf\t",score[i][j]);
            //printf("%.2lf\t",*(score[i] + j));
            printf("%.2lf\t", *(*(score + i) + j));
        }
         printf("\n");
    }
    return 0;
}
