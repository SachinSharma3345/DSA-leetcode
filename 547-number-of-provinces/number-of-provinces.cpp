class Solution {
public:
    void bfs(vector<vector<int>>& adj,vector<bool> &Visited, int i ){
        int n= adj.size();
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(int j =0; j<n; j++){
                if(adj[front][j]==1  && Visited[j]== false){
                    q.push(j);
                    Visited[j] = true;


                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<bool> Visited(n, false);
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(!Visited[i]){
                bfs(adj, Visited, i);
                ans++;
            }
        }
        return ans;
        
    }
};