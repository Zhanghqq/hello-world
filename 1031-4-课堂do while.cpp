/*#include<stdio.h>
int main(){
      int n =1,sum=0;
      do{
      sum+=(n*n+3*n);
      n++	;            ��� 
      	
      }
      while(n<=100);
      printf("%d\n",sum);
      return 0;
}*/


#include<stdio.h>
int main(){
	int x,count=0;
	scanf("%d",&x);//��������һ�����֣��ж����Ǽ�λ�� 
	do{
		x/=10;
		count++;
	}while(x!=0);
	printf("%d\n",count);
	return 0;
}
