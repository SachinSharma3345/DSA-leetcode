class Solution {
public:
    int sum(int n){
        int ans = 0;
        int k = n;
        while(k>0){
            // int ld = k%10;
            ans+= k%10;
            k = k/10;
        }
        return ans;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        // int i = 0;
        int mini = INT_MAX;
        // vector<int> v(n);
        for(int i= 0; i<n; i++){
            nums[i] = sum(nums[i]);
            mini = min(mini, nums[i]);
        }
        return mini;
       
    }
};