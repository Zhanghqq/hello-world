#include<stdio.h>
#include<limits.h>
int max(int x,int y)
{
	if(x>=y)
    	return x;
	else
	    return y;
}

int main()
{
      int a[11]={0},_mx=INT_MIN;
	  for(int i = 0;i<10;i++)
	  {
	  	scanf("%d",&a[i]);
	  	int mx=a[i];
	  	_mx=max(mx,_mx);      //Ӧ���ں���������ʱ�����ֵ���бȽ� 
	  }	                     //�ȵ��ú�������и�ֵ 
	  printf("%d",_mx);
	  return 0;
} 

