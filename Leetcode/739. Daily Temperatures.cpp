#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    vector<int> temperatures;
    while (cin >> x)
    {
        temperatures.push_back(x);
    }
    int n = temperatures.size();
    vector<int> ans(n , 0);
    stack<int> st{};
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && temperatures[st.top()] <= temperatures[i])
            st.pop();

        if(!st.empty())
            ans[i] = st.top() - i;

        st.push(i);
    }
    for(auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;    
}