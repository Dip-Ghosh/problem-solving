#include<stdio.h>
#define array 100
int main(){

int a[array];
for(int i = 0;i < array; i++){
        printf("Enter the input for index %d", i);
    scanf("%d",&a[i]);
}
for(int i = 0;i < array; i++){
     printf("Enter the input for index %d", a[i]);

}
}
