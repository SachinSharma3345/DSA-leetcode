class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        const int MOD = 1e9 + 7;
        vector<long long> dp(n+1, 0); 
        dp[1] = 1;

        for(int day = 2; day<=n; day++){
            for(int j = max(1, day-forget + 1); j <= day-delay; j++) {
                dp[day] = (dp[day] + dp[j]) % MOD;
            }
        }

        long long ans = 0;
        for(int i = n-forget+1; i<=n; i++) {
            if(i>=1) ans = (ans+dp[i]) % MOD;
        }
        return ans;
    }
};
