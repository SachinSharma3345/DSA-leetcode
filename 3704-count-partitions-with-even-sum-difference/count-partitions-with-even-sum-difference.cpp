class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        if (total % 2 != 0) return 0;

        // total even → all (n-1) partitions valid
        return nums.size() - 1;
        
    }
};