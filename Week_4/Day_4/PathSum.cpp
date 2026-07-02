class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;

        // If it's a leaf node, check if sum matches
        if (root->left == nullptr && root->right == nullptr)
            return targetSum == root->val;

        // Search in either left or right subtree
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
