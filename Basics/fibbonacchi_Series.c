//fibbonacchi Series using do while loop
#include<stdio.h>
int main(){

int n,r,i=1;
int fib1=0,fib2=1,fibb;
scanf("%d",&n);
do
{
    printf("%d\t",fib1);
    fibb=fib1+fib2;
    fib1=fib2;
    fib2=fibb;
    i++;

}while(i<=n);

return 0;
}
