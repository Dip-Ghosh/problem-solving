// print the sum of 1-3+5-7+9-....-n
#include<stdio.h>
int sum(int n)
{

    int sum = 0;
    int i = 1;
    int k = -1;
    for(i = 1; i <= n; i = i+2)
    {
        k = k *(-1);
        sum = sum + k*i;

    }
    return sum;
}
int main()
{

    int n;
    printf("Enter the value of N::");
    scanf("%d",&n);
    int result = sum(n);

    printf("The sum is = %d ", result);
    return 0;


}
