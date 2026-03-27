class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        k = k%col;

        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(mat[i][j] != mat[i][(j+k)%col]){
                    return false;
                }
            }
        }
        return true;
        
    }
};