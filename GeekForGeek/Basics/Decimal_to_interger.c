#include<stdio.h>
int main()
{

    float x = 15.95;
    int  i = (((int)(x*1000)) + 5)/10;
    printf ("%d\n", i);

    return 0;
}
