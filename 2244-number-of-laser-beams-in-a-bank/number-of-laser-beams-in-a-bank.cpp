class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0, result = 0;

        for(string row : bank){
            int count = 0;

            // count number of '1's in current row
            for(char c : row){
                if (c == '1') count++;
            }

            if(count > 0){
                result += prev * count;
                prev = count;  
            }
        }

        return result;
        
    }
};