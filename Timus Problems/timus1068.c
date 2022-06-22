/*
Your task is to find the sum of all integer numbers lying between 1 and N inclusive.
*/
#include<stdio.h>
int main()
{

    signed int i=1,n,sum=0;
    scanf("%d",&n);
    if(n>=0)
    {
        while(i<=n){
        sum = sum +i;
        i++;
        }
    }
    else
    {
        while(i>=n)
        {sum = sum +i;
        i--;

        }
    }
    printf("%d",sum);
    return 0;
}
