class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // Base case: if the tree is empty, nothing to invert
        if (root == nullptr) {
            return nullptr;
        }
        
        // Swap the left and right pointers of the current node
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        // Recursively invert the left and right subtrees
        invertTree(root->left);
        invertTree(root->right);
        
        // Return the root of the modified tree
        return root;
    }
};
