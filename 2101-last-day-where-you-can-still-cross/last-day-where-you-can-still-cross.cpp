class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        vector<vector<int>> grid(row, vector<int>(col, 0));
        vector<int> parent(row * col + 2);
        int top = row * col, bottom = row * col + 1;

        iota(parent.begin(), parent.end(), 0);

        function<int(int)> find = [&](int x) {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        };
        auto unite = [&](int a, int b) {
            a = find(a); b = find(b);
            if (a != b) parent[a] = b;
        };

        vector<int> dr = {1, -1, 0, 0};
        vector<int> dc = {0, 0, 1, -1};

        for (int d = cells.size() - 1; d >= 0; d--) {
            int r = cells[d][0] - 1, c = cells[d][1] - 1;
            grid[r][c] = 1;
            int id = r * col + c;

            if (r == 0) unite(id, top);
            if (r == row - 1) unite(id, bottom);

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k], nc = c + dc[k];
                if (nr >= 0 && nr < row && nc >= 0 && nc < col && grid[nr][nc]) {
                    unite(id, nr * col + nc);
                }
            }
            if (find(top) == find(bottom)) return d;
        }
        return 0;
    }
};
