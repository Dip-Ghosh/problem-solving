//1+ (1+2) + (1+2+3) + � + (1+2�+n)

#include<stdio.h>
#include<math.h>
int main()
{
     int i,j,n,sum=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                sum = sum + j;
        }
     printf("%d",sum);
     return 0;
}


