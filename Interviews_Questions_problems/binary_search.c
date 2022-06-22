//binary search
// time complexity log 2based n
#include<stdio.h>

int binary_search(int arr[],int x,int a)
{
    int mid,left = 0,right = a-1;
    while(left<=right)
    {
        mid = (right + left)/2;
        if(arr[mid] == x)
        {
          return mid = x;
        }
         if(arr[mid] < x)
        {
            left = mid +1;
        }
        else{
             right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int x;
    int N=5;

    printf("Enter the search element:");
    scanf("%d",&x);
        int mid = binary_search(arr,N,x);
        if(mid == x)
        {
            printf("element found = %d",mid);
        }
        else{
             printf("element not found =%d",mid);
        }

        return 0;
}
