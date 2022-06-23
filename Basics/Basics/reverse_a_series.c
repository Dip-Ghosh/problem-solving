
#include<stdio.h>
#define array 5
int main(){

int a[array];
for(int i = 0;i < array; i++){
        printf("Enter the input for index = ");
    scanf("%d",&a[i]);
}

for(int i = array-1;i >=0; i--){
     printf("index a%d=%d\n",i, a[i]);

}
}
