#include<stdio.h>
int main()
{   int x;
    scanf("%d",&x);
    if(x>=90&&x<=100)
    printf("����");
    if(x>=75&&x<90)
    printf("����");
    if(x>=60&&x<75)
    printf("����");
    if(x<60&&x>=0)
    printf("������");
    return 0;
}
