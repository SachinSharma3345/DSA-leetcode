class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // int s = 0;
        // int e = nums.size();
        sort(nums.begin(), nums.end());
        for(int i : nums){
            if(original==i){
                original= original*2;

            }

        }
        return original;
        
        
    }
};