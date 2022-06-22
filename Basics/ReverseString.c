#include<stdio.h>
int reserveStringWithLoop(char *str){

    int length = strlen(str);

    for(int i=0; i<length/2; i++){
        int temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }

}
int main(){

char str[50];
printf("Enter a string :");
gets(str);
reserveStringWithLoop(str);
printf("%s",str);
return 0;
}

