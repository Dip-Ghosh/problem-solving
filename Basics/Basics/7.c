//table of factorial

#include<stdio.h>
int main(){

int n,r;
int fact=1;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    fact*=i;
}
printf("%d\t%d",n,fact);
return 0;
}
