#include<stdio.h>
int main()
{float r,h,l,s,sq,v,sv;
float pi=3.1415926;
printf("������Բ�İ뾶��Բ���ĸߣ�");
scanf("%f%f",&r,&h);
l=2*pi*r;
s=pi*r*r;
sq=4*pi*r*r;
v=3/4*pi*r*r*r;
sv=s*h;
printf("�ܳ���%6.2f",l);
printf("Բ�������%6.2f",s);
printf("Բ��ı������%6.2f",sq);
printf("Բ��������%6.2f",v);
printf("Բ���������%6.2f",sv);
return 0;
}
