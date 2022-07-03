class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
      long size = nums.size();
      
      int count = 0;
      
  
      for( int i = 0; i < size; i++ )
      {
        for( int j = i+1; j < size; j++ )
        {
          if(nums[i] == nums[j]) count++;
        }
        
      }
      
      if(count>0) return true;
      else return false;
    }
};