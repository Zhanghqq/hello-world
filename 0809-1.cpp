#include<stdio.h>
int main()
{
         char arr1[] = "abc";//�൱��abc\0 
         char arr2[] = {'a','b','c' ,0};//��Ҫ��ĩβ�ӣ�0�����ܺ������һ����=������\0 �ַ����Ľ�����־ 
         printf("%s\n",arr1);
         printf("%s\n",arr2);
         return 0;
} 
