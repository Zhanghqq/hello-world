/*#include<stdio.h>
int fun(int x,int y,int z) ; 
int main()
{
	int y,m,d,tian;
	scanf("%d%d%d",&y,&m,&d);
	tian=fun(y,m,d);
	printf("%d",tian);
	return 0;
}            

int fun(int x,int y,int z)
{
	int two,tian;
	if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		two = 29;
	else
		two = 28;
	switch(y)
	{
		case 1:   tian = z;  break;
		case 2:	  tian = 31 * 1 + z;break;
		case 3:   tian = 31 * 1 + two + z;  break;
		case 4:   tian = 31 * 2 + two + z; break;
		case 5:   tian = 31 * 2 + two + 30 * 1 + z; break;
		case 6:   tian = 31 * 3 + two + 30 * 1 + z; break;
		case 7:   tian = 31 * 3 + two + 30 * 2 + z; break;
		case 8:   tian = 31 * 4 + two + 30 * 2 + z; break;
		case 9:   tian = 31 * 5 + two + 30 * 2 + z; break;
		case 10:  tian = 31 * 5 + two + 30 * 3 + z; break;
		case 11:  tian = 31 * 6 + two + 30 * 3 + z; break;
		case 12:  tian = 31 * 6 + two + 30 * 4 + z; break;
	}
	return tian;
}         */
//switch�����Ż�      ���������飬ͨ��case���������forѭ������ۼ� 



//�����Ż������鷨
#include<stdio.h>
//����ÿ���µ��������� 
int fun(int x ,int y, int z)
{
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	//��������¶��¼�1
	if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		 a[2]++; 
	int allday = 0,days;
	for(int i = 0;i<y;i++)
	{
		days=a[i];
		allday=allday+days;
	}
	return allday+z; 
} 
int main()
{
	int y,m,d,allday;
	scanf("%d%d%d",&y,&m,&d);
	allday=fun(y,m,d);
	printf("%d",allday);
	return 0;
}           
