#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int * nums;
    nums = (int *)malloc(sizeof(int)*5);//Ϊǰ���ָ�붯̬������20���ֽڵĿռ�
    //num = calloc(5, sizeof(int));������Ч����ͬ
    //�ȼ��ڣ�int nums[5];
    //Ϊָ�붯̬����ռ��ָ��ͱ��������

    for(i=0;i<5;i++)
    {
        printf("�������%d��Ԫ�أ�");
        scanf("%d",nums+i);
    }
    printf("����Ԫ��Ϊ��\n");
     for(i=0;i<5;i++)
    {
        printf("%d\t", *(nums+i));
    }
    free(nums);//�ͷŶ�̬������ڴ�
    nums = NULL;

}
