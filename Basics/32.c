//1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N

#include<stdio.h>
#include<math.h>
int main()
{

int n,i=1;
float sum=0;
int count=1;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
    sum=sum+ (float)pow(count,2)/(float)pow(count,3);
    count=count+2;
}
printf("%f",sum);
return 0;
}
