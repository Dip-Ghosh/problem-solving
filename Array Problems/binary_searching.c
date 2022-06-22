#include<stdio.h>
int binary_search(int a[], int n,int x){
    int left = 0;
    int right = n-1;
    int mid ;
    while(left <= right){
        mid = (left +right)/2;
        if(a[mid] == x){
            return a[mid];
            break;
        }
        else if(a[mid] < x){
            left = left + 1;
        }
        else{
                 right = mid - 1;

        }
    }
}
int main(){
    int a[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(a)/sizeof(a[0]);
    int x = 4;

    int target = binary_search(a,n,x);
    if(target == x){
        printf("Item found");
    }
    else{
        printf("Item not Found");
    }
    return 0;
}

