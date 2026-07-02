class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        /// Both trees are empty, so they are identical
        if (p == nullptr && q == nullptr) 
            return 1;     
        // One tree is empty and the other isn't, so they are different
        if (p == nullptr || q == nullptr) 
            return false;
          
       //The values nodes don't match
        if (p->val != q->val) 
            return false;     
        
        // Recursively check if left and right subtrees are identical
        bool isLeftSame = isSameTree(p->left, q->left);
        bool isRightSame = isSameTree(p->right, q->right);
        
        return isLeftSame && isRightSame;
    }
};
