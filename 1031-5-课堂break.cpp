#include<stdio.h>
int main(){
	int x,i;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&x);
		if(x<0) 
		 break;
	}
	if(i<=10)         //ֻҪ���������ģ�һ���������������������Ϊ1 
	 printf("1");
	else
	 printf("0");    //֤������for��if��ȫ������ 
	 return 0;
}
