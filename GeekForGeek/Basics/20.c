/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

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
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
