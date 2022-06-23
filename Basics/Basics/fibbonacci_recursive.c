//recursive fibbonacci find the nth position of the fibbonacci series
#include<stdio.h>

int fibb(int n)
{
    if( n<= 1)
      return n;
    return fibb(n-1) + fibb(n-2);
}
int main()
{
    int n;
    printf("Enter the desire factorial ::");
    scanf("%d",&n);
    int result = fibb(n);
    printf("%d",result);
}
