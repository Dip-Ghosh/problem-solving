#include<stdio.h>
int sumOfDigit(int n);
 int main()
 {

     int n;
     printf("Enter a value::");
     scanf("%d",&n);
     printf("The sum is:%d",sumOfDigit(n));
     return 0;
 }
int sumOfDigit(int n)
{
    int remainder;
    int sum=0;
    while(n!=0)
    {
      remainder=n%10;
      sum=sum+remainder;
      n=n/10;
    }
    return sum;
}
