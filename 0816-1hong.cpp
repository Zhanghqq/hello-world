#include<stdio.h>

//�����Ķ��� 
int Max(int x, int y)
{
	if(x>y)
	   return x;
	else   
                  return y;	   
}


#define MAX(X,Y) (X>Y?X:Y)//��Ķ��� 
int main()
{
	//�������� 
	int a =10;
	int b =20;
	int max =Max(a,b);
	//��Ķ��� 
	max = MAX(a,b);
	printf("%d\n",max);
	printf("%d\n",max);
	return 0;
}



/*#include<stdio.h>
#define MAX(X,Y) (X>Y?X:Y)//��Ķ��� 
int main()
{
	int a = 10;
	int b = 20;
	
	max = MAX(a,b);
	printf("%d\n",max);
	return 0;
}*/
