class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n>0){
            if(n&1) count++;
            n= n/2;
        }
        // return __builtin_popcount(n);
        return count;
        
    }
};