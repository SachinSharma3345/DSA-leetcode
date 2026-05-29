class Solution {
public:
    void bfs(vector<vector<int>>& rooms, vector<bool> &visited, int i){
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(int ele: rooms[front]){
                if(!visited[ele]){
                    q.push(ele);
                    visited[ele] = true;
                }
            }
        }

    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n);
        visited[0] = true;

        
        bfs(rooms, visited, 0);
            
        

        for(auto ele: visited){
            if(ele == false)return false;
        }
        return true;
        
    }
};