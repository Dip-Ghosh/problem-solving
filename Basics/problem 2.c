#include<stdio.h>
void listNumberAsc(int s,int e);
int main()
{

    int s, e,l;
    printf("Enter the starting Number::");
    scanf("%d",&s);
    printf("Enter the Ending Number::");
    scanf("%d",&e);
    listNumberAsc(s,e);
    return 0;
}
void listNumberAsc(int s,int e)
{
    int i;

    for(i=s;i<=e;i++)
    {

       printf("%d\n",i);
    }
}
