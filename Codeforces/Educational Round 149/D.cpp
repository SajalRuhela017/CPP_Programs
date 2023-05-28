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
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        map<int, int> mp;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++)
            count += (s[i] == ')' ? -1 : 1);
        if(count != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        int val = 0, open = 0, close = 0;
        unordered_map<char, int> ump;
        priority_queue<int, vector<int>, greater<int>> mxpq;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
                ++open;
            else
                --open;
            if(open < 0)
            {
                ++val;
                break;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ')')
                ++close;
            else
                --close;
            if(close < 0)
            {
                ++val;
                break;
            }
        }
        vector<int> temp(n);
        if(val == 2)
        {
            cout << 2 << '\n';
            vector<int> ans(n);
            set<int> st;
            int l = 0, r = n - 1;
            while(l < r)
            {
                if(s[l] == ')' && s[r] == '(')
                {
                    ump[s[l]]++;
                    ump[s[r]]++;
                    ans[l++] = 2;
                    ans[r--] = 2;
                }
                else if(s[l] == '(' && s[r] == '(')
                {
                    ump[s[l]]++;
                    ump[s[r]]++;
                    ans[r--] = 2;
                    ans[l++] = 1;
                }
                else if(s[l] == ')' && s[r] == ')')
                {
                    ump[s[l]]++;
                    ump[s[r]]++;
                    ans[r--] = 1;
                    ans[l++] = 2;
                }
                else
                {
                    ump[s[l]]++;
                    ump[s[r]]++;
                    ans[r--] = 1;
                    ans[l++] = 1;
                }
            }
            for(auto &i: ans)
                cout << i << ' ';
            cout << '\n';
        }
        else
        {
            cout << 1 << '\n';
            for(int i = 0; i < n; i++)
                cout << 1 << ' ';
            cout << '\n';
        }
    }
    return 0;
}