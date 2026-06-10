class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int m = INT_MAX, n = INT_MIN;
        for(int x:nums){
            m = min(m, x);
            n = max(n,x);
        }
        return (long long)(n-m)* k;
        
    }
};