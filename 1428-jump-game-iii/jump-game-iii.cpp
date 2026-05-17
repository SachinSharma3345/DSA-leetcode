class Solution {
public:
    bool solve(vector<int>& arr, int start, vector<int>& vis) {
        if(start < 0 || start >= arr.size() || vis[start])
            return false;

        if(arr[start] == 0)
            return true;

        vis[start] = 1;

        return solve(arr, start + arr[start], vis) ||
               solve(arr, start - arr[start], vis);
    }

    bool canReach(vector<int>& arr, int start) {
        vector<int> vis(arr.size(), 0);
        return solve(arr, start, vis);
    }
};