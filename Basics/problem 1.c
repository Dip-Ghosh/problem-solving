#include<stdio.h>
int sum(int n);
 int main()
 {

     int n;
     printf("Enter a value::");
     scanf("%d",&n);
     printf("The sum is:%d",sum(n));
     return 0;
 }
int sum(int n)
{

    int i=1,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
