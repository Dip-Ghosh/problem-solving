#include<stdio.h>

int selection_sort(int a[],int n)
{
int min,temp,i,j;

 for(i = 0; i< n-1; i++)
 {
    min = i;
    for(j = i+1 ;j< n; j++)
    {
        if(a[j]<a[min])

         min = j;
    }

    if(min!=i)
    {
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

    }
 }


}
int main()

{

 int a[] = {9,1,8,7,3,6,4,2,5,0};
 int n = sizeof(a)/sizeof(a[0]);

selection_sort(a,n);

 for(int i = 0; i<n; i++)
 {
    printf("%d\n",a[i]);
 }


 return 0;
}
