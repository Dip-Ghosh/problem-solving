
//fibbonacchi Series using while loop
#include<stdio.h>
int main(){

int n,r,i=1;
int fib1=0,fib2=1,fibb;
scanf("%d",&n);

while(i<=n)
{
    printf("%d\t",fib1);
   fibb=fib1+fib2;
   fib1=fib2;
   fib2=fibb;
    i++;

}

return 0;
}
