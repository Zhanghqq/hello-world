#include<stdio.h>
#include<limits.h>
int main(){
	int i;
	double r = 1;
	printf("%d\n",INT_MAX);//���int�ܷŵ����ֵ ���ж��Ƿ���� 
	for(i=1;i<=10;i++)//ѭ�������Ѿ�ȷ��������²��� 
	{               //����for��i<=10��������if(!(x<=10))  break;
		r*=i;
	}
	printf("%.0f",r);
	return 0;
	
}
