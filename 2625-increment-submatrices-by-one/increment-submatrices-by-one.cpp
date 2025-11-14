class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> mat(n, vector<int>(n,0));

        for(auto &q:queries){
            int row1 = q[0];
            int col1 = q[1];
            int row2 = q[2];
            int col2 = q[3];

            for(int i =row1; i<=row2; i++){
                for(int j = col1; j<=col2; j++){
                    mat[i][j]++;
                }
            }
        }
        return mat;



        
        
    }
};