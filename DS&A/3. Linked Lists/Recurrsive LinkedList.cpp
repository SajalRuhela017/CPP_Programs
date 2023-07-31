/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    Node *head = new Node(x);
    Node *temp = head;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        temp->next = new Node(x);
        temp = temp->next;
    }
    temp = head;
    while(temp)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    return 0;
}