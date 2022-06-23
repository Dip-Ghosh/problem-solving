
#include<stdio.h>
#define array 5
#define arr 10
int main(){

int a[array];
int seen[arr]={0};
for(int i = 0;i < array; i++){
    scanf("%d",&a[i]);
}

for(int i = 0;i < array; i++){
int count=0;
   for(int k=i+1;k<array;k++)
    {
     if(a[i]==a[k])
     {
         seen[i]=a[i];
         //printf("%d",seen[i]);
         count++;
     }

  }
  printf("%d",seen[arr]);
if(count == 0 && seen[arr] == 0)
  printf("%d",a[i]);
}


return 0;
}

