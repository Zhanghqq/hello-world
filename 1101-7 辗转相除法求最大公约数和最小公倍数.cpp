#include<stdio.h>
int main(){
	int a,b,c=1,t,d;
	scanf("%d %d",&a,&b);
	d=a*b;
/*	if(a>b)
	{  t=a;
	a=b;
	b=t;
	}*/
             while(c!=0);{
		c=a%b;//�������� 
		t=a;
		a=b;
		b=c;
	}
	printf("%d %d",b,d/b);
	
	
	return 0;
}

/*#include<stdio.h>
int main(){
	int a,b,c,t,d;
	scanf("%d %d",&a,&b);
	c=a%b;
	d=a*b;

             while(c!=0){                  //�ṹ�ٽ����Ż���while��c=a%b����ʱֱ�Ӷ�c��ֵ�����жϣ�������ȡģ����
                                          //  ���c��Ϊ�㣬���ж�ֵΪ�棬����ִ�У���c=0ʱ���㷨���� 
		a=b;
		b=c;
		c=a%b;
	}
	printf("%d %d",b,d/b);
	
	
	return 0;
}*/��ȷ�������Ƚ���һ��շת����ڽ����ж� 
