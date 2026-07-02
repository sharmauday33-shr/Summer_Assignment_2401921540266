class Solution {
public:
    
    // Check if every node lies within the valid range
    bool isValid(TreeNode* node, long long low, long long high) {
        if (node == nullptr)
            return true;

        // Current node must be strictly inside the range
        if (node->val <= low || node->val >= high)
            return false;

        // Left subtree: values < node->val
        // Right subtree: values > node->val
        return isValid(node->left, low, node->val) &&
               isValid(node->right, node->val, high);
    }

    bool isValidBST(TreeNode* root) 
    {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};
