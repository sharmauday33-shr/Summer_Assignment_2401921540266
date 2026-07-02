
class Solution {
public:
    int maxDepth(TreeNode* root) 
 {
        // Base case: if the node is null, depth is 0
        if (root == nullptr) 
            return 0;
          
        
        // Recursively find the depth of left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        // The total depth is 1 (current node) + the maximum of the two sides
        return 1 + std::max(leftDepth, rightDepth);
    }
};
