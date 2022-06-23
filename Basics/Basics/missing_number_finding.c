#include<stdio.h>
int missing_number(int A[],int n){

  int total = (n+1)*(n+2)/2 ;
  int i = 0;
  for(i =0 ; i<n; i++ ){
    total -= A[i];
  }
  return total;
}
int main(){
   int arr[] = { 1, 2,3, 4, 5, 6 ,7, 8, 10};
   int n = sizeof(arr)/sizeof(arr[0]) ;

   int missing = missing_number(arr,n);
   printf("Missing Number is : %d ", missing);
    return 0;
}

