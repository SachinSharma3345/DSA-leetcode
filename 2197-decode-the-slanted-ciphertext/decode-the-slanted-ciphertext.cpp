class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if (rows == 0) return "";
        
        int n = encodedText.size();
        int cols = n / rows;
        
        string result = "";
        
        // Traverse diagonals starting from first row
        for (int startCol = 0; startCol < cols; startCol++) {
            int r = 0, c = startCol;
            
            while (r < rows && c < cols) {
                result += encodedText[r * cols + c];
                r++;
                c++;
            }
        }
        
        // Remove trailing spaces
        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        
        return result;
    }
};