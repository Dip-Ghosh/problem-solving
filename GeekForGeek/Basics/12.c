//fibbonacchi Series  sum of nth term
#include<stdio.h>
int main()
{
int n,i=1;
int fib1=0,fib2=1,fibb=0,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   fib1=fib2;
   fib2=fibb;
   sum=sum+fibb;
   fibb=fib1+fib2;

}
printf("%d\t",sum);
return 0;
}
