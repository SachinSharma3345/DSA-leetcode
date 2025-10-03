class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if(heightMap.empty() || heightMap[0].empty()){
            return 0;
        }

        int m = heightMap.size();
        int n = heightMap[0].size();
        
        // Min-heap to store (height, row, col)
        // We use a vector<tuple<int, int, int>> and greater<> to simulate a min-heap
        using Cell = tuple<int, int, int>;
        priority_queue<Cell, vector<Cell>, greater<Cell>> pq;

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int trappedWater = 0;

        // 1. Initialize the perimeter walls
        // Top and Bottom rows
        for (int j = 0; j < n; ++j) {
            // Top row
            pq.emplace(heightMap[0][j], 0, j);
            visited[0][j] = true;
            // Bottom row (if m > 1)
            if (m > 1) {
                pq.emplace(heightMap[m - 1][j], m - 1, j);
                visited[m - 1][j] = true;
            }
        }
        
        for(int i = 1; i<m-1; i++){
            pq.emplace(heightMap[i][0], i, 0);
            visited[i][0] = true;
            if(n>1){
                pq.emplace(heightMap[i][n-1], i, n-1);
                visited[i][n-1] = true;
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!pq.empty()){
            auto[h, r, c] = pq.top();
            pq.pop();

            for(int i = 0; i < 4; ++i){
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    int neighborHeight = heightMap[nr][nc];

                    if (neighborHeight < h) {
                        trappedWater += (h - neighborHeight);
                        pq.emplace(h, nr, nc);
                    } else {
                        pq.emplace(neighborHeight, nr, nc);
                    }
                }
            }
        }

        return trappedWater;
    }
};