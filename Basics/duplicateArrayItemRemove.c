#include<stdio.h>
int duplicateRemvoeArray(int arr[],int n){

int i,j,k;
    for(i=0; i<n; i++){
        for(j=i+1;j<n; j++){
            if(arr[i] == arr[j]){
                for(k=j; k<n; k++){
                    arr[k] =arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i = 0;i<n;i++){
        printf("%d \t",arr[i]);
    }

}
int main(){

int array[6] ={5,6,4,2,5,2};
int size = sizeof(array)/sizeof(array[0]);
duplicateRemvoeArray(array,size);
return 0;
}
