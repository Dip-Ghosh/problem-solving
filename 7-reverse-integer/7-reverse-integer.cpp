class Solution {
public:
    int reverse(int x) {
        
      long reverse = 0;
      while( x != 0)
      {
         reverse = reverse*10 + x %10;
        
        if(reverse > INT_MAX || reverse < INT_MIN){
          return 0;
        }
        
           x       = x/10;
       
      }
      return reverse;
    }
};