#include<stdio.h>
#define array 5
int main(){

int a[array],b[array];
for(int i = 0;i < array; i++){
    scanf("%d",&a[i]);
}

for(int i = 0;i < array; i++){
      b[i] = a[i];
}
for(int i = 0;i < array; i++){
      printf("% 5d", b[i]);
}
return 0;
}
