#include<stdio.h>
int main(){
	int i,count;
	count = 0;
	for(i=10;i<=98;i+=2)
	{
		if(i/10==i%10)//�������22��33��44��λ������ͬ 
		{
		
		 count++;//������ 
		 printf("%3d",i);}
	}
	printf("\n%d\n",count);//�Ȼ��У������ 
	return 0;
}
