#include<stdio.h>
// �������--�����¶�ת���������¶ȵ�ת����Χ��[low,high]��ת������Ϊstep����Ҫ���ú���ʵ�֣�

//������������ʾlow��high��step��ֵ��

//ת����ÿ��һ��������������һλС����

double swap(int x)            //һ��Ҫע�⺯������ֵ������ 
{
	 double cc;
	 cc=5.0*(x-32)/9;
	 return cc;
}



int main()
{
	int low,high,step;
	scanf("%d%d%d",&low,&high,&step); 
	for(int i = low;i<=high;i+=step)
	{
		double cs=swap(i);
		printf("%.1f\n",cs);
	}
	return 0;
}
