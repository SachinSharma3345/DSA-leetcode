class Solution {
public:
    static const int MOD = 1e9 + 7;
    int n, m, k;

    int solve(int i, int j, int mod,
              vector<vector<int>>& grid,
              vector<vector<vector<int>>>& dp)
    {
        if (i == n - 1 && j == m - 1)
            return ((mod + grid[i][j]) % k == 0);

        if (dp[i][j][mod] != -1)
            return dp[i][j][mod];

        long long ways = 0;
        int newMod = (mod + grid[i][j]) % k;

        if (i + 1 < n)
            ways = (ways + solve(i + 1, j, newMod, grid, dp)) % MOD;

        if (j + 1 < m)
            ways = (ways + solve(i, j + 1, newMod, grid, dp)) % MOD;

        return dp[i][j][mod] = ways;
    }

    int numberOfPaths(vector<vector<int>>& grid, int k) {
        n = grid.size();
        m = grid[0].size();
        this->k = k;

        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(
                   m, vector<int>(k, -1)));

        return solve(0, 0, 0, grid, dp);
    }
};
