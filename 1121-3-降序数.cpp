#include<stdio.h> 
int fun(int x)
{
	//����ÿ���� ��ͳ�Ƹ������������� 
	  int a[100]={0},i=0; 
	  while(x>0)
	  {
	  	a[i]=x%10;
	  	x/=10;
	  	i++;         //���һ��ִ��i�����һ�� 
	  }
	  for(int k = 0; k < (i-1);k++)
	  {
	  	if(a[k]>a[k+1])     //�����һ�����ֵ��жϲ���� 
	  	return 0;
	  }
	  return 1;              
}
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	flag=fun(n);
	if(flag==1)
		printf("Yes");
	else
		printf("No");
} 
