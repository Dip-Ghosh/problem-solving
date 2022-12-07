#include<stdio.h>
int reserveStringWithRecursion(char *str){

    int length = strlen(str);
    int static i;

    if(i<length/2){
        int temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
        i++;
        reserveStringWithRecursion(str);
    }

}
int main(){

char str[50];
printf("Enter a string :");
gets(str);
reserveStringWithRecursion(str);
printf("%s",str);
return 0;
}


