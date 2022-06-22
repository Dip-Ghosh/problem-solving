

//fibbonacchi Series using for loop
#include<stdio.h>
int main(){

int n,r,i=1;
int fib1=0,fib2=1,fibb;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\t",fib1);
   fibb=fib1+fib2;
   fib1=fib2;
   fib2=fibb;
}

return 0;
}
