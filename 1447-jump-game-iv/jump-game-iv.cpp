class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        if (n == 1) return 0;

        unordered_map<int, vector<int>> mp;
        
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> vis(n, false);

        q.push(0);
        vis[0] = true;

        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                int idx = q.front();
                q.pop();

                if (idx == n - 1)
                    return steps;

                if (idx - 1 >= 0 && !vis[idx - 1]) {
                    vis[idx - 1] = true;
                    q.push(idx - 1);
                }

                if (idx + 1 < n && !vis[idx + 1]) {
                    vis[idx + 1] = true;
                    q.push(idx + 1);
                }

                for (int next : mp[arr[idx]]) {
                    if (!vis[next]) {
                        vis[next] = true;
                        q.push(next);
                    }
                }

                mp[arr[idx]].clear();
            }

            steps++;
        }

        return -1;
    }
};