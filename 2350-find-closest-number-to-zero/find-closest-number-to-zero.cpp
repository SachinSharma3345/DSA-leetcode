class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(auto num : nums){
            if(abs(num) < abs(ans) || (abs(num) == abs(ans) && num > ans)) {
                ans = num;
            }
        }
        
        return ans;
        
    }
};