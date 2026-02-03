class Solution {
public:
    bool isStrictlyIncreasing(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; ++i) {
            if (nums[i] >= nums[i + 1])
                return false;
        }
        return true;
    }

    bool isStrictlyDecreasing(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; ++i) {
            if (nums[i] <= nums[i + 1])
                return false;
        }
        return true;
    }

    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        for (int p = 1; p < n - 2; ++p) {
            if (!isStrictlyIncreasing(nums, 0, p)) continue;
            for (int q = p + 1; q < n - 1; ++q) {
                if (isStrictlyDecreasing(nums, p, q) &&
                    isStrictlyIncreasing(nums, q, n - 1)) {
                    return true;
                }
            }
        }
        return false;
    }
};
