//����ָ�� 
#include<stdio.h>
int main()
{
	int *px,x;        //����ָ�����px 
	px=&x;           //px�൱����һ����ַ 
	scanf("%d",px);
	printf("%d\n",*px);     //*pxΪ��ӷ�������������ʵ�ַ�ڵ�ֵ
	return 0; 
} 



//ָ������ĺ�������     /�����Ҫ�������ض��ֵ���� 
//����ͬ�� 
#include<stdio.h>
void _hanshu(int m,int n,int *p,int *q);          //��������һ��Ҫ�ӷֺ� 
int main()
{
	int m,n;
	int chi,rat;
	scanf("%d%d",&m,&n);
	_hanshu(m,n,&chi,&rat);
	if(chi!=0||rat != 0)
	printf("%d %d",chi,rat); 
	else
	printf("error");
	return 0;
} 

void _hanshu(int m,int n,int *p,int *q)
{
	int x,y;
	for(x=0;x<=m;x++)
	{
		y=m-x;
		if(2*x+4*y==n)  break;
	}
	if(x<=m)
	{
		*p=x;                   //���������ý������������x��y��ֵ����ڹ̶��ĵ�ַ�� 
		*q=y;
	}
	else
	{
		*p=0;
		*q=0;
	}
	return;
}
		  
//�����
#include<stdio.h>
int main()
{
int *p,*q,a;
p=&a;
q=p;              //ָ�������ȱ�ʾ���ָ��ָ����Ҳ�ָ����ͬ�ĵ�ַ 
scanf("%d",q);
printf("%d",a); 
return 0;}  

