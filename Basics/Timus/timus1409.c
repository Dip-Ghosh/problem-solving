

/*
/*
Input
The only input line contains two integers — the number of cans shot by Harry and by Larry respectively.
Output
two integers — the number of cans that were not shot by Harry and the number of cans that were not shot by Larry, respectively.
Sample
input	output
4 7
6 3

*/
#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d%d",b-1,a-1);

    return 0;
}

