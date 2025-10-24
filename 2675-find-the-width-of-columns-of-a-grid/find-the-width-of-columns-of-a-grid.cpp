class Solution {
public:
    int funcn(int n){
        int ans = 0;
        if(n==0) return 1;
        if(n<0){
            ans++;
            n = abs(n);
        }
        while(n){
            ans++;
            n = n/10;
        }
        return ans ;

    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<int> ans;

        for(int j = 0; j<c; j++){
            int temp = 0;
            for(int i = 0; i<r; i++){
                temp = max(temp, funcn(grid[i][j]));

            }
            ans.push_back(temp);
        }
        return ans;
    
    }
};