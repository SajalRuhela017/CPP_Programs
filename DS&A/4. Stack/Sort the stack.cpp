/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

stack<int> sortStack(stack<int> s)
{
    stack<int> temp;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        while(!temp.empty() && temp.top() < x)
        {
            s.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }
    return temp;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        stack<int> s;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.push(x);
        }
        s = sortStack(s);
        while(!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << "\n";
    }
    return 0;
}