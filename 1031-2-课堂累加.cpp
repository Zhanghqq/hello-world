#include<stdio.h>
int main()
{
	int i;
	double sum = 1;
	for(i=2;i<=100;i++,i++)//���ű��ʽ������ִ�У�Ҳ����i+=2
	{sum+=1.0/i;
	} 
	printf("%f\n",sum);//Ĭ��С�������λ 
	return 0;
}
