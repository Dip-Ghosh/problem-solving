#include<stdio.h>
int main()
{

    int i=1,n;
    int num1=0,num2=1;
    int fibb;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        fibb=num1+num2;
        num1=num2;
        num2=fibb;
        printf("%d\n",fibb);
    }

    return 0;
}
