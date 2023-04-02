/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

struct TreeNode
{
    int val;
    struct TreeNode *right, *left;
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};


vector<vector<int>> levelorderTraversal(TreeNode* root)
{
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        vector<int> temp;
        for(int i = 0; i < n; i++)
        {
            TreeNode* node = q.front();
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
            temp.push_back(node->val);
        }
        ans.push_back(temp);
    }
    return ans;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(8);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);
    vector<vector<int>> ans = levelorderTraversal(root);
    for(auto i: ans)
    {
        for(auto j: i)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}