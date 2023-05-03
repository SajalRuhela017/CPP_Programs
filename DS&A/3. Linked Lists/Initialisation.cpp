/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

struct Node {
    int data;
    Node *next;
};

void addToList(int n, Node *head)
{
    Node *current = head;
    int x;
    cin >> x;
    current->data = x;
    head->next = current;
    head = current;
    for(int i = 1; i < n; i++)
    {
        Node *temp = new Node;
        cin >> x;
        temp->data = x;
        current->next = temp;
        current = temp;
    }
}

void printValuesInList(Node *head)
{
    while(head)
    {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    Node *head = new Node;
    head->next = NULL;
    int n;
    cin >> n;

    //adding to the list
    addToList(n, head);

    //printing the list
    printValuesInList(head);

    //deleting elements in tehe list
    deleteElements(n, head);

    cout << "\nProgram Completed" << '\n';

    return 0;
}