#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    vector<int> v;
    while (cin >> x)
    {
        v.push_back(x);
    }
    int n = v.size();
    vector<int> ans(n);
    stack<int> st;
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && st.top() <= v[i])
        {
            st.pop();
        }
        if(!st.empty())
        {
            ans[i] = st.top();
            st.push(v[i]);
            continue;
        }
        if(st.empty())
        {
            ans[i] = -1;
            st.push(v[i]);
            continue;
        }
    }
    for(auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;    
}