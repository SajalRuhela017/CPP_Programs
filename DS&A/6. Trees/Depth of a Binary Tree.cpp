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

int maxDepth(TreeNode* root)
{
    if(!root)
        return 0;
    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    return 1 + max(leftHeight, rightHeight);
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

    int ans = maxDepth(root);
    cout << ans << '\n';
    return 0;
}