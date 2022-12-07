class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
      // time complexity O(nlogn) as sort uses nlogn space complexity O(n)
      sort(nums.begin(),nums.end());
     
      for( int i = 0; i < nums.size() -1; i++)
      {
        if(nums[i] == nums[i+1]) return true;
       
      }
       return false;
    

   // time complexity O(n) as sort uses nlogn space complexity O(n)
     unordered_map<int,int> m;
      
      for(auto a:nums) m[a]++;
     
      for(auto a:m)
      {
        if(a.second >1) return true;
      }

      return false;


   // time complexity O(n) as sort uses space complexity O(n)
        unordered_set<int> s;
      for(auto a:nums) s.insert(a);
      if(s.size() != nums.size()) return true;
      else return false;
  

};