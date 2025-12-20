class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;   
        int n = strs.size();
        int m = strs[0].size();
        for(int row = 0; row<m; row++){
            for(int col = 1; col<n; col++){
                if(strs[col][row]< strs[col-1][row]){
                    ans++;
                    break;
                }
            }
        }
        return ans;


    }
};