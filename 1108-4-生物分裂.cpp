#include<stdio.h>
int main(){
	int x,y,n;
	scanf("%d%d%d",&x,&y,&n);
	for(int i = 1;i<=2*n;i++){    //ȡ��Сʱ�䵥λ 
                    if(i%2!=0){
                    	y=y-x;
                    	if(y<0) y=0;
                    }                     //��ʱ�̻��֣��ض�ʱ�̽����ض����� 
                    if(i%6==0) x*=2;
                    if(i%4==0) y*=2;
	}
	printf("%d %d",x,y);
	return 0;
} 
