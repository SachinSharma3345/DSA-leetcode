class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            }
            else if (c == ')') {
                low--;
                high--;
            }
            else {
                low--;   // * as ')'
                high++;  // * as '('
            }

            if (high < 0) return false;
            low = max(low, 0);
        }

        return low == 0;
    }
};