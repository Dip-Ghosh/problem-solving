class Solution {
public:
    int search(vector<int>& nums, int target) {
        
      int left = 0;
      int right= nums.size() -1;
      
      while(left <= right)
      {
        int mid = left + (right -left)/2;
        
        if(target == nums[mid]) return mid;
        
        //check which portion the sorted value present
        else if(nums[left] <= nums[mid]){
          
          if(target < nums[left] || target > nums[mid]){
            left = mid+1;
          }else{
            right = mid -1;
          }
        } 
        
        // right sorted check
        else{
          
           if(target > nums[right] || target < nums[mid]){
            right = mid - 1;
          }else{
            left = mid +1;
          }
        }
      }
      return -1;
    }
};