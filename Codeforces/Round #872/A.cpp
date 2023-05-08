/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool isPalin(string s)
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        set<char> st(s.begin(), s.end());
        if(st.size() == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << s.size() - 1 << '\n';
        }
    }
    return 0;
}