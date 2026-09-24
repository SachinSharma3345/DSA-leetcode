class Solution {
public:
    int sum(int n){
        int s = 0;
        while(n){
            int ld = n%10;
            s += ld;
            n = n/10;

        }

        return s;
    }

    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(sum(nums[i])== i){
                return i;
            }
        }
        return -1;

        
    }
};