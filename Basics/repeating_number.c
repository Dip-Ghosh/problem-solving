#include<stdio.h>
int printRepeating(int a[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            printf("%d",a[i]);
        }
    }
}
}
int main()
{
  int arr[] = N4, 2, 4, 5, 2, 3, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
