class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        unordered_map<long long,int> freq;
        map<long long,int> diff; 

        for(long long v : nums){
            freq[v]++;
            diff[v-k] += 1;
            diff[v+k+1] -= 1;
        }

        set<long long> allKeys;
        for(auto &p : diff) allKeys.insert(p.first);
        for(auto &v : nums) allKeys.insert(v);

        int ans = 1;
        long long adjustable = 0;
        auto itDiff = diff.begin();

        for(long long x : allKeys){
            while (itDiff != diff.end() && itDiff->first <= x) {
                adjustable += itDiff->second;
                ++itDiff;
            }

            int cnt_eq = freq.count(x) ? freq[x] : 0;
            long long adjustable_not_eq = adjustable - cnt_eq;
            if (adjustable_not_eq < 0) adjustable_not_eq = 0;
            ans = max(ans, cnt_eq + (int)min<long long>(numOperations, adjustable_not_eq));
        }
        return ans;
    }
};
