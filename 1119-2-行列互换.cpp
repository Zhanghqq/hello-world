#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
        int hang,lie;
        scanf("%d%d",&hang,&lie);
        int a[100][100]={0};
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        //�������ֵ�����к�
        int max=a[0][0];
        int ki = 0,mi = 0,temp; 
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                if(a[i][j]>max)  //˼����max���ǳ�ֵ�����
                {
                    max=a[i][j];
                    ki=i;   //�������ֵ�к�
                }
            }
        }
        //������Сֵ�����к�
        int min=a[0][0];
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                if(a[i][j]<min)  //˼����min���ǳ�ֵ�����
                {
                    min=a[i][j];
                    mi=i;   //������Сֵ�к�
                }
            }
        }
        //��������
        for(int j = 0; j< lie ; j++)
        {
            temp=a[ki][j];
            a[ki][j]=a[mi][j];
            a[mi][j]=temp;
        }
        //���
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
