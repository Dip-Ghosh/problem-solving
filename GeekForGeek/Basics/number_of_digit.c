#include<stdio.h>
int main(){
    int seen [5] = {0};
    int n = 85235;
    while(n>0){
        int r = n%10;
        if(seen[r] == 1)
            break;

        seen[r] = 1;
        n = n/10;
    }
    if(n>0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
