#include<stdio.h>
#include<math.h>
int main(){
	int sum,a,b,t,s=0,j,c=0;
	scanf("%d%d%d",&sum,&a,&b);
	for(int i = a;i<=b;i++){          //����a��b֮����� 
	          t=sqrt(i);
	          for(j = 2;j<=t;j++){        //����������� 
	          	if(i%j==0){            //�������� 
	          		break;
	          	}
	          }	
	          if(j>t&&i!=1){                 //��1�򲹶� 
	          	s+=i;                    //��ִ�мӵĲ��� 
	          	if(s<=sum){               //���ж��Ƿ���� 
	          	printf("%d\n",i);          
                              c++;
		}
		else              //��s�Ѿ�����sum ʱ�������������Ѿ�ʵ�֣�����Ҫ���������������������ֱ�ӽ��� 
		break;      //һ��Ҫע������������⣬��if�Ѿ���������ʱ�� 
	          }
	}
	printf("%d\n",c);
	return 0;
}
