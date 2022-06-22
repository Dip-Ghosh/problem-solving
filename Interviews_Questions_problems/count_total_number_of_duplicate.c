#include<stdio.h>
#define array 5

int main(){

int a[array],count=0;
for(int i = 0;i < array; i++){
    scanf("%d",&a[i]);
}

for(int i = 0;i < array; i++){
  for(int j=i+1;j<array;j++){
     if(a[i]==a[j])
         count++;
}
}
printf("%d",count);

return 0;
}

