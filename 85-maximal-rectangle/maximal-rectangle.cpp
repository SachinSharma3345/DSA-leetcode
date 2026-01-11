class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int n = matrix[0].size(), ans = 0;
        vector<int> h(n + 1, 0); // +1 sentinel

        for (auto& row : matrix) {
            for (int j = 0; j < n; j++)
                h[j] = (row[j] == '1') ? h[j] + 1 : 0;

            stack<int> st;
            for (int i = 0; i <= n; i++) {
                while (!st.empty() && h[st.top()] > h[i]) {
                    int height = h[st.top()]; st.pop();
                    int width = st.empty() ? i : i - st.top() - 1;
                    ans = max(ans, height * width);
                }
                st.push(i);
            }
        }
        return ans;
    }
};
