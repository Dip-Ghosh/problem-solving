#include<stdio.h>
int main()
{
    int n,reverse = 0,remainder;
    scanf("%d",&n);
    int original = n;
    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if(original == reverse)
    {
        printf(" The number is a Palindrome.");
    }
    else{
                printf(" The number is not a Palindrome.");
    }


    return 0;
}
