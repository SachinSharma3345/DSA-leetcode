class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        
        long long total = 0;
        for (auto &row : grid) {
            for (int val : row) total += val;
        }
        
        if (total % 2 != 0) return false;
        
        long long target = total / 2;
        
        // Horizontal cuts
        long long sum = 0;
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
            }
            if (sum == target) return true;
        }
        
        // Vertical cuts
        sum = 0;
        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) {
                sum += grid[i][j];
            }
            if (sum == target) return true;
        }
        
        return false;
    }
};