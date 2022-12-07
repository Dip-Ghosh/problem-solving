/*
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
int main()
{
    int i=1,j=1,n,n1;
    scanf("%d\n%d",&n,&n1);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n1;j++)
        {
            if(i==1|| i==n||j==1||j==n1)
            {printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



