class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        int minidx = 0;
        int maxidx = 0;

        for(int i = 0; i<n; i++){
            if(nums[i]< nums[minidx]){
                minidx = i;
            }
            if(nums[i]> nums[maxidx]){
                maxidx = i;
            }
        }

        int l = min(minidx,maxidx);
        int r = max(minidx, maxidx);

        int fromLeft = r+1;
        int fromRight = n-l;
        int fromBoth = l+1+n-r;

        return min(fromLeft,min(fromBoth,fromRight));

        

        
    }
};