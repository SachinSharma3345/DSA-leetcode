
class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            if (a[1] == b[1]) return a[0] > b[0];
            return a[1] < b[1];
        });

        int p1 = -1, p2 = -1;  
        int ans = 0;

        for (auto &it : intervals) {
            int l = it[0], r = it[1];

            bool has_p1 = (p1 >= l && p1 <= r);
            bool has_p2 = (p2 >= l && p2 <= r);

            if (has_p1 && has_p2) {
                continue;
            }
            else if (has_p1) {
                ans += 1;
                p2 = p1;
                p1 = r;
            }
            else {
                ans += 2;
                p2 = r - 1;
                p1 = r;
            }
        }

        return ans;
    }
};
