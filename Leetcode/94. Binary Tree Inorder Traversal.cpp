// Given the root of a binary tree, return the inorder traversal of its nodes' values.

class Solution {
public: 
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* node = root;
        while(true)
        {
            if(node)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if(st.empty())
                    break;
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};