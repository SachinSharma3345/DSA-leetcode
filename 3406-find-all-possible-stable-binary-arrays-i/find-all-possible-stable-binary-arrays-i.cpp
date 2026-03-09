class Solution {
public:
    int MOD = 1e9 + 7;
    int dp[201][201][2];

    int solve(int zero, int one, int last, int limit){
        if(zero == 0 && one == 0) return 1;
        if(dp[zero][one][last] != -1) return dp[zero][one][last];

        long long ans = 0;

        if(last == 0){
            for(int i = 1; i <= limit && i <= one; i++)
                ans = (ans + solve(zero, one - i, 1, limit)) % MOD;
        } 
        else {
            for(int i = 1; i <= limit && i <= zero; i++)
                ans = (ans + solve(zero - i, one, 0, limit)) % MOD;
        }

        return dp[zero][one][last] = ans;
    }

    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp, -1, sizeof(dp));
        long long ans = 0;

        for(int i = 1; i <= limit && i <= zero; i++)
            ans = (ans + solve(zero - i, one, 0, limit)) % MOD;

        for(int i = 1; i <= limit && i <= one; i++)
            ans = (ans + solve(zero, one - i, 1, limit)) % MOD;

        return ans;
    }
};