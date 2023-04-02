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
    struct TreeNode *left, *right;
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    };    
};

vector<int> inorderTraversal(TreeNode *root)
{
    //left->root->right
    vector<int> v;
    stack<TreeNode*> st;
    TreeNode *temp = root;
    while(true)
    {
        if(temp)
        {
            st.push(temp);
            temp = temp->left;
        }
        else
        {
            if(st.empty())
                break;
            temp = st.top();
            st.pop();
            v.push_back(temp->val);
            temp = temp->right;
        }
    }
    return v;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    struct TreeNode *root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> left -> right -> left = newNode(8);
    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);
    root -> right -> right -> left = newNode(9);
    root -> right -> right -> right = newNode(10);

    vector<int> inorder = inorderTraversal(root);

    for(auto &i: inorder)
        cout << i << " ";
    cout << "\n";
    return 0;
}