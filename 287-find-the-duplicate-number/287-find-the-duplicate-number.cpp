class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
      
      unordered_map<int, int> findNumber;
    
      for(auto a:nums) findNumber[a]++;
      
      for(auto b:findNumber)
      {
        if(b.second >1) 
        {
          return b.first;
        }
      }
      return -1;
      
      
      sort(nums.begin(),nums.end());
      
      for(int i= 0; i< nums.size() - 1; i++)
      {
        if(nums[i] == nums[i+1]) return nums[i];
      }
      return -1;
      
    }
      
    
};