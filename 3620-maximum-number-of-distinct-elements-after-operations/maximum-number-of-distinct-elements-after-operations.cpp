class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long nextFree = (long long)nums[0] - k - 1; 
        int distinct = 0;

        for(int x : nums){
            long long left = (long long)x - k;
            long long right = (long long)x + k;

            long long assign = max(left, nextFree + 1);

            if(assign <= right){
                distinct++;
                nextFree = assign;  
            }
        }

        return distinct;
    }
};
