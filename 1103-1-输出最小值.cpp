#include<stdio.h>
#include<limits.h>
int main(){
	int x;
//ͨ�����봴��������Ԫ�صĸ��� 
	scanf("%d",&x);
	int arr[x];
//�������ݵ������� 
	for(int i = 0;i<x;i++){
		scanf("%d",&arr[i]);
	}
//������Сֵ��ѭ���Ƚ� 
	int min = INT_MAX;
	for(int i = 0;i<x;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	printf("%d",min);
	return 0;
}
