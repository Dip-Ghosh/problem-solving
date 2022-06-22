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
    int n,i=0;
    printf("Enter the desire factorial ::");
    scanf("%d",&n);
    while(i<=n)
    {
        int result = fibb(i);
        printf("%d\t",result);
        i++;
    }
    return 0;

}
