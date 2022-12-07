// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
      int left = 1;
      int right = n;
      if(n==0) return -1;
      
      while(left <= right){
        
        int mid = left + (right-left)/2;
        
        if(isBadVersion(mid)) right = mid - 1;
        else left = mid + 1;
      }
      if(isBadVersion(left)) return left;
      else return left+1;
    }
};