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
    stack<TreeNode*> st;
    while(root || !st.empty())
    {
        if(root)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            TreeNode *temp = st.top()->right;
            if(!temp)
            {
                temp = st.top();
                st.pop();
                v.push_back(temp->val);
                while(!st.empty() && temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();
                    v.push_back(temp->val);
                }
            }
            else
                root = temp;
        }
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