#include<stdio.h>
int main()
{

    int d,y,m;
    scanf("%d",&m);
    y=m/(24*60*365);
    d=y-m%(24*60);
    printf("Year=%d\n Day=%d",y,d);
    return 0;

}
