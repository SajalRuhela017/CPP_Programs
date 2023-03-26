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
        cout << "okay\n";
        int n;
        cin >> n;
        stack<int> st, temp;
        for(int i = 0; i < n; i++)
        {
            int x;
            cout << "okay\n";
            cin >> x;
            st.push(x);
        }
        cout << "okay\n";
        deque<int> q;
        while(!st.empty())
        {
            cout << "okay\n";
            if(temp.empty() && q.empty())
            {
                temp.push(st.top());
                st.pop();
            }
            else if(temp.top() >= st.top())
            {
                while(!q.empty() && st.top() >= q.front())
                {
                    temp.push(q.front());
                    q.pop_front();
                }
                temp.push(st.top());
                st.pop();
            }
            else if(temp.top() < st.top())
            {
                while(temp.top() < st.top() && !temp.empty())
                {
                    q.push_back(temp.top());
                    temp.pop();
                }
                temp.push(st.top());
                st.pop();
            }
        }
        cout << st.size() << "\n";
        while(!temp.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }
    }
    return 0;
}