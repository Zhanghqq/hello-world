#include<stdio.h>
int main(){
	long long x,y,n,s;
	int a,b;
	//����һ��ѭ���������
	 scanf("%lld",&s);  //���1��n
	 for(n = 1;n<=s;n++){
	 	x=n;y=n*n;
               	do{
		a=x%10;
		b=y%10;
		if(a!=b){
	               	break;	
		}
		x/=10;
		y/=10;
               	}while(x>0); 
               	if(x==0){
			printf("%lld ",n);
                     	}
	 	
	 } 
	return 0;
}
	
	
	//����ͬ�������ʽ 
	//scanf("%lld",&n);
//	x=n;
//	y=n*n;
/*	do{
		a=x%10;
		b=y%10;
		if(a!=b){
		break;	
		}
		x/=10;
		y/=10;
	}while(x>0); 
	if(x==0){
			printf("%lld",n);
	}
	
	return 0;
}*/
