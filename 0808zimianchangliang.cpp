#include<stdio.h>
//#define MAX 10 
enum Sex //ö�ٹؼ�enum
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
    //const int num = 4;//  const���γ�����ʹ��num�̶�Ϊ4 
    //printf("%d\n",num);
    //num = 8;
    //printf("%d\n",num);
     //int arr[MAX] = {0};//���� 
    //const int n = 10;  n�Ǳ������Ӵ�const���г����ԣ�Ϊ������ 
    //int arr[n] = {0};//[��Ҫ�ų���] 
    //printf("%d\n",MAX);
   printf("%d\n",MALE);
    printf("%d\n",FEMALE); 
    printf("%d\n",SECRET);    
      
    return 0;	 
}
//enum  Color
//{
//	RED
//	YELLOW
//	BLUE
//};
//int main()
//{ 
  //  enum Color color = BLUE;
    //return 0;
//}
