
//1-1/3+1/5-

#include<stdio.h>
#include<math.h>
int main()
{

int n,i=1;
float sum=0,sum1=0,sum2=0;
int count=1;

scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
    if(i%2!=0)
    {
        sum1=sum1+(float) 1.0/count;
    }
    else
    {
        sum2=sum2-(float) 1.0/count;
    }
    sum=sum1+sum2;
    count=count+2;
}
printf("%f",sum);
return 0;
}
