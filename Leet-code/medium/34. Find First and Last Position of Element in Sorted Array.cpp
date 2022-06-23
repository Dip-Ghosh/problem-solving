class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      
        vector<int>result(2);
         result[0] = findFirst(nums, target);
         result[1] = findLast(nums, target);
         return result;
    }
  
  //first part search
    int findFirst(vector<int>& nums, int target)
    {
         
    int ans   = -1;
    int left  = 0;
    int right = nums.size() - 1;
      
    while( left <= right ){
      
        int mid = left + (right -left) / 2;
      
        if(nums[mid] == target){
          ans = mid;
          right= mid -1;
        }
        else if (nums[mid] < target)  left = mid + 1;
        else right = mid - 1;
       
    }
    return ans;
    }
  
  //second part search
    int findLast(vector<int>& nums, int target)
    {
         
  
    int res   = -1;
    int left  = 0;
    int right = nums.size() - 1;
       
    while( left <= right ){
      
        int mid =left + (right - left) / 2;
      
        if(nums[mid] == target){
          ans   = mid;
          left  = mid + 1;
        }
        else if ( nums[mid] < target )  left = mid + 1;
        else  right = mid - 1;
      
    }  
       return ans;

     }
 
};

