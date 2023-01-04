//1+(2+3)+(4+5+6)+...........
#include<stdio.h>
#include<math.h>
int main()
{

     int i=1,n,sum=0;
     scanf("%d",&n);
     sum=(n*(n+1)*(pow(n,2)+n+2))/8;
     printf("%d",sum);
     return 0;
}

