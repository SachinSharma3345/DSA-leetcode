class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        set<int> s1;
        set<int> s2;

        for(int i = 0; i<rows; i++){
            int minValue = matrix[i][0];
            for(int j = 0; j<cols; j++){
                minValue = min(minValue, matrix[i][j]);
            }
            s1.insert(minValue);
        }
        
        for(int i = 0; i<cols; i++){
            int maxValue = matrix[0][i];
            for(int j = 0; j<rows; j++){
                maxValue = max(maxValue, matrix[j][i]);
            }
            s2.insert(maxValue);
        }

        vector<int> result;
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(s1.count(matrix[i][j]) && s2.count(matrix[i][j]) ){
                    result.push_back(matrix[i][j]);

                }
            }
        }
        return result;

    }
};