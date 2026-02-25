class Solution {
public:
    static int cmp(int a, int b){
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);

        if(count_a==count_b) return a<b;
        return count_a< count_b;

    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
        
    }
};