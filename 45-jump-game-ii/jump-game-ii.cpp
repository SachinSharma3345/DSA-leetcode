class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0;
        int l=0,r=0;
        while(r < n - 1){
            int farest = 0;
            for(int i = l;i<=r;i++){
                farest = max(farest,i + nums[i]);
            }
            jumps++;
            l = r + 1;
            r = farest;
        }

        return jumps;
    }
};