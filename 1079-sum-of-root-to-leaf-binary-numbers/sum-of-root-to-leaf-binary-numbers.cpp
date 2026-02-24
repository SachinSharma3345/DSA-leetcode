class Solution {
public:
    int ans = 0;

    void dfs(TreeNode* root, int curr) {
        if (!root) return;

        curr = (curr << 1) | root->val;

        if (!root->left && !root->right) {
            ans += curr;
            return;
        }

        dfs(root->left, curr);
        dfs(root->right, curr);
    }

    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};