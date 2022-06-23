#include<stdio.h>
int palindrome(int n);
int main()
{

    int x;
    scanf("%d",&x);
    palindrome(x);
    return 0;
}
int palindrome(int n)
{
     int r,re=0;
     int f=n;
    while(f!=0)
    {

        r=f%10;
        re=r+re*10;
        f=f/10;
    }
    if(re==n)
    {
        printf("Palindrome");
    }
   else
    {
        printf("Not Palindrome");
    }
}
