class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = 0;
        if(nums.size()==3){
            for(int i: nums){
                sum+=i;
            }
            return sum;
        }
        sum = nums[0];
        int s_mini = 100, mini = 100;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]<mini){
                s_mini = mini;

                mini = nums[i];
            }
            else if(nums[i]<s_mini){
                s_mini = nums[i];
            }
        }
        return sum+mini+s_mini;
        
    }
};