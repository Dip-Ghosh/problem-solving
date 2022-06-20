
#include<stdio.h>
#include<math.h>
int main()
{

     int i=1,n,sum=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {

         sum=sum+pow(i,i);
     }
     printf("%d",sum);
     return 0;
}
