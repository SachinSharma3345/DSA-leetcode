class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> inc_len(n, 1);

        // Step 1: compute lengths of strictly increasing subarrays starting at i
        for(int i = n - 2; i >= 0; i--){
            if(nums[i]<nums[i+1]){
                inc_len[i] = inc_len[i+1] + 1;
            }
        }

        // Step 2: binary search for maximum k
        int left = 1, right = n / 2;
        int max_k = 0;

        while(left <= right){
            int k = (left + right) / 2;
            bool found = false;

            for(int i=0; i<=n-2*k; i++){
                if(inc_len[i]>=k && inc_len[i+k] >= k){
                    found = true;
                    break;
                }
            }

            if(found){
                max_k = k;
                left = k + 1;
            } else {
                right = k-1;
            }
        }

        return max_k;
        
    }
};