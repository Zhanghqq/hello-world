#include <stdio.h>
int main(){  
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if(a+b<=c||a+c<=b||b+c<=a)
     printf("0");
     else
      {
       if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
       printf("2");
       else
         {if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
         printf("3");
         else
         printf("1");
         }
      }
      return 0;
}
