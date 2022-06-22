#include<stdio.h>
int linear_search(int a[], int n,int x){
    int i = 0;
    for(int i=0; i<n; i++){
        if(a[i] == x){
          return a[i];
        }
    }
    return -1;
}
int main(){
    int a[] = {34,56,54,32,67,89,90,32,21};
    int n = sizeof(a)/sizeof(a[0]);
    int x = 2;

    int target = linear_search(a,n,x);
    if(target == x){
        printf("Item found");
    }
    else{
        printf("Item not Found");
    }
    return 0;
}


