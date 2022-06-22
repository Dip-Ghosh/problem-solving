//(1/3)+(3/5)+(5/7)

#include<stdio.h>
#include<math.h>
int main(){

int n,i=1;
float sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+( (float)(pow(i,2)) / (float)(pow(i,3)));
}
printf("%f",sum);
return 0;
}
