#include<stdio.h>
int fibb(int n);
int main()
{

    int x,i;
    printf("enter the value:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",fibb(i));
    }
    return 0;

}
int fibb(int n)
{

    if(n<2)
        return n;

    else
        return (fibb(n-1)+fibb(n-2));
}
