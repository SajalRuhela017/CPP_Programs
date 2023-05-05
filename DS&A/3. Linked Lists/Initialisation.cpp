/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
class Node {
    public:
        int data;
        Node* next;
    
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void insertLL(Node* &temp, int x)
{
    Node *first = new Node(x);
    temp->next = first;
    temp = temp->next;
}

void print(Node* head)
{
    while(head->next)
    {
        cout << head->data << ' ';
        head = head->next;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    Node* head = new Node(1);
    Node* temp = head;
    for(int i = 1; i <= 5; i++)
    {
        int x;
        cin >> x;
        insertLL(temp, x);
    }
    print(head);
    return 0;
}