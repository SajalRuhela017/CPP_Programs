/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
// #define int long long

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

vector<int> preorderTraversal(TreeNode *root)
{
    //root->left->right
    vector<int> v;
    if(root == NULL)
        return v;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty())
    {
        root = st.top();
        st.pop();
        v.push_back(root->val);
        if(root->right)
            st.push(root->right);
        if(root->left)
            st.push(root->left);
    }
    return v;
}

struct TreeNode *newNode(int data) 
{
    struct TreeNode *node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node -> val = data;
    node -> left = NULL;
    node -> right = NULL;
    return (node);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    struct TreeNode * root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> left -> right -> left = newNode(8);
    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);
    root -> right -> right -> left = newNode(9);
    root -> right -> right -> right = newNode(10);

    vector<int> preorder = preorderTraversal(root);

    for(auto &i: preorder)
        cout << i << " ";
    cout << "\n";
    return 0;
}