class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0 ) return false;
        
        long int num = x, reverse  = 0,remainder = 0;
        while(x != 0 )
        {
            remainder     = x % 10;
            reverse       = reverse * 10 + remainder;
            x        = x / 10;
        }
        
        return num == reverse;
      
    }
};