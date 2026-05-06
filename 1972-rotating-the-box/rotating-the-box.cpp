class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        vector<vector<char>> ans(m,vector<char>(n));
        for(int i = 0;i<n;i++){
           int left = 0;
           int right = 0;
           while(right < m){
                while(right < m && boxGrid[i][right] == '#') right++;
                if(right >= m) break;
                int ele = boxGrid[i][right];
                if(ele == '*'){
                    left = right + 1;
                    while(left < m && boxGrid[i][left] != '#') left++;
                    right = left;
                    continue;
                }
                swap(boxGrid[i][left],boxGrid[i][right]);
                left++;
                right++;
           }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                ans[j][i] = boxGrid[i][j];
            }
        }

        for(int i = 0;i<m;i++){
            reverse(ans[i].begin(),ans[i].end());
        }

        return ans;
    }
};