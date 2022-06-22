
#include<stdio.h>
void cyclicRotation(int a[],int n){
   int x = a[n-1],i;
   for(i=n-1;i>0;i--){
    a[i] =a[i-1];
   }
    a[0] =x;

}
int main(){
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);

  cyclicRotation(arr,size);
  for (int i = 0; i < size; i++){
      printf("%d\t",arr[i]);
  }

}
