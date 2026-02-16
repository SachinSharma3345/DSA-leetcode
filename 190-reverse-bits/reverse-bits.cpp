class Solution {
public:
    int reverseBits(int n) {
        int ans =0;
        for(int i =0; i<32; i++){
            ans = ans<<1;
            int ld =n&1;
            ans = ans | ld;
            n = n>> 1;
        }
        return ans;
        
        
    }
};
