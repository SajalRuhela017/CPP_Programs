// Given a binary tree, determine if it is height-balanced.

class Solution {
public:
    int calcHeight(TreeNode* root)
    {
        if(!root)
            return NULL;
            
        int lHeight = calcHeight(root->left);
        if(lHeight == -1)
            return -1;

        int rHeight = calcHeight(root->right);
        if(rHeight == -1)
            return -1;

        if(abs(rHeight - lHeight) > 1)
            return -1;
        
        return 1 + max(rHeight, lHeight);
    }

    bool isBalanced(TreeNode* root)
    {
        return calcHeight(root) != -1;    
    }
};