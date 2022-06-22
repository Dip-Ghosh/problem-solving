/*
list of palindrome.
*/

#include<stdio.h>
int main()
{

    int i=1,start,end,remainder,reverse ,temp;
    scanf("%d",&end);
    for( i= 1;i <= end; i++)
    {
        temp = i;
        reverse = 0;
        while(temp)
        {
            remainder = temp%10;
            reverse = reverse * 10 + remainder;
            temp = temp/10;
        }
         if( i ==reverse )
       {
            printf("%d\n", reverse);
       }


    }
    return 0;
}
