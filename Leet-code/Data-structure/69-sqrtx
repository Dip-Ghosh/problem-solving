class Solution {
public:
    int mySqrt(int x) {
      
     long int left  = 0;
     long int right = INT_MAX;
     long int sqrt  = 0;
      
    while( left <= right)
    {
      long int mid = left + (right -left)/2;
      
      if(mid*mid <= x)
      {
        sqrt= mid;
        left = mid +1;
      }
      else{
       right = mid -1;
      }
    }
     return sqrt;
    }
};