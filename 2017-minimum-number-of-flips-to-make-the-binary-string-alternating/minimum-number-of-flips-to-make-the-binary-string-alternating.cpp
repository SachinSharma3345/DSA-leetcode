class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        string alt1 = "", alt2 = "";
        for (int i = 0; i < 2*n; i++) {
            alt1 += (i % 2 ? '1' : '0'); // 0101...
            alt2 += (i % 2 ? '0' : '1'); // 1010...
        }

        int res = INT_MAX, diff1 = 0, diff2 = 0;
        int l = 0;

        for (int r = 0; r < 2*n; r++) {
            if (t[r] != alt1[r]) diff1++;
            if (t[r] != alt2[r]) diff2++;

            if (r - l + 1 > n) {
                if (t[l] != alt1[l]) diff1--;
                if (t[l] != alt2[l]) diff2--;
                l++;
            }

            if (r - l + 1 == n) {
                res = min(res, min(diff1, diff2));
            }
        }

        return res;
    }
};