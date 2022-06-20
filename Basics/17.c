
/*
A
B B
C C C
D D D D
E E E E E
*/
#include<stdio.h>
int main()
{

    int i=1,j=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}

