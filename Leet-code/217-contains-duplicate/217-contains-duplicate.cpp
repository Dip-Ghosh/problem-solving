class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
      sort(nums.begin(),nums.end());
     
      for( int i = 0; i < nums.size() -1; i++)
      {
        if(nums[i] == nums[i+1]) return true;
       
      }
       return false;

      
//       unordered_map<int,int> m;
      
//       for(auto a:nums) m[a]++;
      
      
     
//       for(auto a:m)
//       {
//         cout << a.first << " " << a.second << endl;
//         //if(a.second >1) return true;
//       }
      
//       return false;
  
      // unordered_set<int> s;
      // for(auto a:nums) s.insert(a);
      // if(s.size() != nums.size()) return true;
      // else return false;
     }
  
};