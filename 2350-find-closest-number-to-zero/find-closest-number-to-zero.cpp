class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b){
            if(abs(a) == abs(b)) return a > b; 
            return abs(a) < abs(b);           
        });
        return nums[0];
    }
};
