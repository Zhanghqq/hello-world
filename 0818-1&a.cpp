#include<stdio.h> 
int main()

{
    int a = 10;
    int* p= &a;//��ŵ�ַ�ı���int*ָ����� 
    
    printf("%p\n",&a);
    printf("%p\n",p);
    *p = 20;//�����ò�����/������ӷ��ʲ����������ҵ�p����Ӧ�ĵ�ַa
    //Ȼ��a��ֵ�ı� 
    printf("%d",a);
    
    return 0;
}
