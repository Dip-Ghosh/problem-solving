class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
      vector<int> num;
      unordered_map <int,int> duplicates;
      
      for(auto a:nums) duplicates[a]++;
      
      for(auto b:duplicates)
      {
        if(b.second > 1) num.push_back(b.first);
          
      }
      return num;
      
      sort(nums.begin(),nums.end());
      
      for(int i=0; i< nums.size()-1; i++)
      {
        if(nums[i] == nums[i+1])
        {
           num.push_back(nums[i]);
        }
        
      }
      return num;
    }
};