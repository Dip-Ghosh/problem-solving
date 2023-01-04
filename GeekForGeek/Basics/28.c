/*

   sssss
   sssss
   ss0ss
   sssss
   sssss
*/

#include<stdio.h>
int main()
{

    int i=1,j=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
           if(i==ceil(n/2.0)&& j==ceil(n/2.0))
           {
               printf("0");
           }
           else
           {
                printf("S");
           }
        }

        printf("\n");
    }
    return 0;
}
