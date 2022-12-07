#include<stdio.h>
double hermonicSum(int n);
 int main()
 {

     int n;
     printf("Enter a value::");
     scanf("%d",&n);
     printf("The sum is:%lf",hermonicSum(n));
     return 0;
 }
double hermonicSum(int n)
{

    double i=1;
    double sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
    return sum;
}

