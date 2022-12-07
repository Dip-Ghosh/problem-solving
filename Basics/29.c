// 1+(1/1!)+(1/2!)+(1/3!).....
#include<stdio.h>
int main(){

int n;
float sum=1.0,i=1,fact=1.0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{

    fact=fact*i;
    sum=sum+1.0/fact;
}
printf("%f",sum);
return 0;
}
