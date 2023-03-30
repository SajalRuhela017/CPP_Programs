/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

class Stack {
    int top;
    int *arr;
    int size;
    public:
        Stack()
        {
            top = -1;
            size = 1000;
            arr = new int[size];
        }
        void Push(int x)
        {
            arr[++top] = x;
        }
        int Pop()
        {
            int x = arr[top];
            --top;
            return x;
        }
        int Top()
        {
            return arr[top];
        }
        int Size()
        {
            return top + 1;
        }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    Stack s;
    s.Push(8);
    s.Push(7);
    s.Push(6);
    s.Push(5);
    s.Push(4);
    cout << "Size of stack is: " << s.Size() << "\nTop of the stack is: " << s.Top() << "\n";
    cout << "The element popped is: " << s.Pop() << "\n";
    cout << "Stack size after deleting the element is: " << s.Size() << "\n";
    cout << "Top of the stack is: " << s.Top() << "\n";
    return 0;
}