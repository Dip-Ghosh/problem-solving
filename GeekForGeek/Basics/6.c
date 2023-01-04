// reverse a digit 12345 to 54321

#include<stdio.h>
int main(){

int n,r;
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    printf("%d",r);
    n=n/10;
}
return 0;
}
