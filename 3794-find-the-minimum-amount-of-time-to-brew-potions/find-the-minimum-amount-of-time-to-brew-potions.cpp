class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size();
        int m = mana.size();

        // prefix sum of skills for quick lookup of partial sums
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; ++i)
            pref[i + 1] = pref[i] + skill[i];

        vector<long long> prevC(n, 0), currC(n, 0);

        // First potion starts at time 0
        long long start = 0;
        for (int i = 0; i < n; ++i)
            currC[i] = start + mana[0] * pref[i + 1];
        prevC = currC;

        // Process remaining potions
        for (int j = 1; j < m; ++j) {
            // Compute the earliest start time for this potion
            long long startNeeded = LLONG_MIN;
            for (int i = 0; i < n; ++i)
                startNeeded = max(startNeeded, prevC[i] - mana[j] * pref[i]);
            start = max(0LL, startNeeded);

            // Compute completion times for this potion
            for (int i = 0; i < n; ++i)
                currC[i] = start + mana[j] * pref[i + 1];

            prevC = currC;
        }

        // The total minimum brewing time
        return prevC.back();
    }
};