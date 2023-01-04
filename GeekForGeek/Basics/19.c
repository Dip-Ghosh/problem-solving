/*

* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>
int main()
{

    int i=1,j=1,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {

        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
