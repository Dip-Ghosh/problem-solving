class Solution {
public:
    void reverseString(vector<char>& s) {
      
      int n     = s.size();
      int left  = 0;
      int right = n-1;
      int j     = 0;
      
      // using swap
      while(left < right){
      
        int temp = s[left];
        s[left]  = s[right];
        s[right] = temp;
        
        left++;
        right--;  
      }
      
      //using swap with builin function
         while(left < right){
           
       swap(s[left],s[right]);
      
        left++;
        right--;  
      }
      
      //using an extra memory space
      vector<char> ans(n);
      
      for( int i = n-1; i>=0; i--)
      {

        ans[j] = s[i];
        j++;
        
      }
      
        
    }
};