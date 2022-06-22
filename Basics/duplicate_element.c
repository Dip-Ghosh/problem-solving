

#include<stdio.h>
#define array 5
int main(){

int a[array];
for(int i = 0;i < array; i++){
        printf("Enter the input for index = ");
    scanf("%d",&a[i]);
}

for(int i = 0;i < array; i++){
        for(int j = i+1;j < array;j++)
        {
              if(a[i] == a[j])
              {
                   printf("%d",a[j]);
                   break;
              }
        }

}
return 0;
}
