class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[count++] = nums[i];
            }
        }

        while(count<nums.size()){
            nums[count++] = 0; 
        }

        
        
    }
};