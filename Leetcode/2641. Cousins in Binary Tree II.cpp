// Given the root of a binary tree, replace the value of each node in the tree with the sum of all its cousins' values.

// Two nodes of a binary tree are cousins if they have the same depth with different parents.

// Return the root of the modified tree.

// Note that the depth of a node is the number of edges in the path from the root node to 

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) 
    {
        queue<TreeNode*> q;
        q.push(root);
        root->val = 0;
        while(!q.empty())
        {
            int n = q.size();
            vector<TreeNode*> buf;
            int sum = 0;
            while(n--)
            {
                TreeNode* node = q.front();
                q.pop();
                buf.push_back(node);
                if(node->left)
                { 
                    q.push(node->left);
                    sum += node->left->val;
                }
                if(node->right)
                {
                    q.push(node->right);
                    sum += node->right->val;
                }
            }
            for(auto node: buf)
            {
                int t = sum;
                if(node->left)
                    t -= node->left->val;
                if(node->right)
                    t -= node->right->val;
                if(node->left)
                    node->left->val = t;
                if(node->right)
                    node->right->val = t;
            }
        }
        return root;
    }
};