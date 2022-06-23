
//if a number is even then subtract 1 and if odd then add one from 1 to 10 numbers.
#include<stdio.h>
void even();
void odd();
int n=1;
void odd()
{

    if( n<= 10){
        printf("even = %d\n",n+1);
        n++;
        even();
    }
    return;
}
void even()
{
      if( n<= 10){
        printf("odd = %d\n",n-1);
        n++;
        odd();
    }
    return;

}

int main(){
    odd();
    return 0;

}
