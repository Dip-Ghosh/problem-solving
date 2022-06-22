

bool isPalindrome(int x){
    
    long long int reverse = 0;
    int remainder = 0;
    int num = x;

    if(num < 0) return false;

    while( num > 0 ){
        remainder = num % 10;
        reverse   = reverse * 10 + remainder;
        num      /= 10;
    }
    return reverse == x ;
}