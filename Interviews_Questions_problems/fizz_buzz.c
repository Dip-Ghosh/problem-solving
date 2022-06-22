#include<stdio.h>
int main()
{

    int i=1;
    for(i=1;i<=100;i++)
    {
         if(i%15==0)
        {
            printf("Fizz-Buzz=%d\n",i);
        }
        else if(i%3==0)
        {

            printf("Fizz=%d\n",i);
        }
        else if(i%5==0)
        {
            printf("Buzz=%d\n",i);
        }

        else
            printf("%d\n",i);
    }
}
