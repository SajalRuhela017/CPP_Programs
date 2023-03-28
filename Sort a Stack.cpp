/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

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
        stack<int> st, temp;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        while(!st.empty())
        {
            int x = st.top();
            st.pop();
            while(!temp.empty() && temp.top() > x)
            {
                st.push(temp.top());
                temp.pop();
            }
            temp.push(x);
        }
        while(!temp.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }
    }
    return 0;
}