#include<stdio.h>
int main()
{
    int num = 9;
    int*ptr_num = &num;
    //ָ��ĵ�ַ
    int*ptr_num2 = &ptr_num;
    //%pָ��ռλ����%x 16����ռλ��
    printf("num�����ĵ�ַ�ǣ�%p\t%x\n",ptr_num,&num);

    printf("ָ��pte_num�ĵ�ַ�ǣ�%p\n",ptr_num2);
    //ʹ��ָ���޸ı���ֵ
    *ptr_num = 9999;
    printf("*ptr_num��Ӧ��ֵΪ��%d\n",*ptr_num);
    return 0;
}
