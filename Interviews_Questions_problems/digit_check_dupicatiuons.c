#include<stdio.h>
#define a 10
int main(){

int seen[a]={0},n;
printf("Enter the input :");
scanf("%d",&n);
while(n>0){
    int remainder = n%10;
    if(seen[remainder] == 1)
    break;
    seen[remainder] = 1;
    n=n/10;
}
if(n>0)
    printf("Yes");
else
    printf("No");

return 0;
}
