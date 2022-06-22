#include<stdio.h>
int main()
{
  int a[] = {4, 2, 4, 5, 2, 3, 1};
  int n = sizeof(a)/sizeof(a[0]);

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            for(int k=j;k<n;k++){
                a[k] = a[k+1];
            }
            n--;
            j--;
        }
    }
}
  for(int i=0; i<n;i++){
    printf("%d",a[i]);
  }

  return 0;
}
