class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n + 1);
        dp[0] = {""};

        for (int k = 1; k <= n; k++) {
            for (int i = 0; i < k; i++) {
                for (string a : dp[i]) {
                    for (string b : dp[k - 1 - i]) {
                        dp[k].push_back("(" + a + ")" + b);
                    }
                }
            }
        }

        return dp[n];
        
    }
};