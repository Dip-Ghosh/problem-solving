#include<stdio.h>
void listNumberDsc(int s,int e);
int main()
{

    int s, e;
    printf("Enter the starting Number::");
    scanf("%d",&s);
    printf("Enter the Ending Number::");
    scanf("%d",&e);
    listNumberDsc(s,e);
    return 0;
}
void listNumberDsc(int s,int e)
{
    int i;

    for(i=e;i>=s;i--)
    {

       printf("%d\n",i);
    }
}
