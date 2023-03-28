/**            ॐ
 *      author : rhsajal_017
**/

//  Time Complexity:    O(N)
//  Space Complexity:   O(N)

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

vector<int> postorderTraversal(TreeNode *root)
{
    //left->right->root
    vector<int> v;
    stack<TreeNode*> st1, st2;
    st1.push(root);
    TreeNode *temp;
    while(!st1.empty())
    {
        temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left)
            st1.push(temp->left);
        if(temp->right)
            st1.push(temp->right);
    }
    while(!st2.empty())
    {
        temp = st2.top();
        v.push_back(temp->val);
        st2.pop();
    }
    return v;
}

struct TreeNode* newNode(int data)
{
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = data;
    newNode->left = NULL;
    newNode->right = NULL;
};

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

    vector<int> postorder = postorderTraversal(root);

    for(auto &i: postorder)
        cout << i << " ";
    cout << "\n";
    return 0;
}