class Solution {
public:
    int makeTheIntegerZero(long long num1, long long num2) {
        for(int k = 1; k <= 60; k++){
            long long val = num1 - k * num2;
            if(val < k) continue; 
            if(__builtin_popcountll(val) <= k) return k;
        }
        return -1;
    }
};
