class Solution {
public:
    int triangularSum(vector<int>& nums) {
          while(nums.size()>1){
            int n = nums.size();
            
            vector<int> newNums(n - 1);
            
            for (int i = 0; i<n-1; i++){
                newNums[i] = (nums[i] + nums[i+1]) % 10;
            }
            
            nums = newNums;
        }
        
        return nums.empty() ? 0 : nums[0];
        
    }
};