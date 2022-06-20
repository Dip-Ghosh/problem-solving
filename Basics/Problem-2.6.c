#include<stdio.h>
int main()
{

    int n,count=0;
    scanf("%d",&n);
    for(int i=;i<=n;i++)
    {
        if(i==0)
            break;

        if(i>0)
            {
                count=count+1;
            printf("Postive numbers=%d\tCOunt=%d\n",i,count);
            }

        else
            {
                count=count+1;
           printf("negative numbers=%d\tCOunt=%d\n",i,count);
            }
    }
    return 0;

}
