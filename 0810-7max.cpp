#include<stdio.h>

//����Max���� 
int Max(int x,int y)
{
	if(x>y)
	   return x;
	else
	   return y;
	
}


int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2); 
//��1���ߴ�������	if(num1 > num2)
//
//	    printf("�ϴ�ֵ�ǣ�%d\n",num1);
//	else
//	    printf("�ϴ�ֵ�ǣ�%d\n",num2);
              int max = 0;
              max = Max(num1,num2);
              printf("�ϴ�ֵ�ǣ�%d\n",max);
              





	return 0;    
                                            
}
