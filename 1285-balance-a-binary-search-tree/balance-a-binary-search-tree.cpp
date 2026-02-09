/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorder;

    // Step 1: In-order traversal to store values
    void inOrderTraversal(TreeNode* root) {
        if (!root) return;
        inOrderTraversal(root->left);
        inorder.push_back(root->val);
        inOrderTraversal(root->right);
    }

    // Step 2: Build balanced BST from sorted values
    TreeNode* buildBalancedBST(int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(inorder[mid]);
        root->left = buildBalancedBST(left, mid - 1);
        root->right = buildBalancedBST(mid + 1, right);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inOrderTraversal(root);
        return buildBalancedBST(0, inorder.size() - 1);
    }
};
