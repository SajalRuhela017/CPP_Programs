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
        string s;
        cin >> s;
        if(s.size() == 1)
        {
            if(s[0] == '^')
                cout << 1 << '\n';
            else
                cout << 2 << '\n';
        }
        else if(s.size() == 2)
        {
            if(s == "^^")
                cout << 0 << '\n';
            else if(s == "__")
                cout << 3 << '\n';
            else
                cout << 1 << '\n';
        }
        else
        {
            int ans = (s[0] == '_');
            for(int i = 1; i < s.size(); i++)
            {
                if(s[i] == '_')
                {
                    if(s[i - 1] == '^')
                        continue;
                    else
                        ans++;
                }
            }
            ans += (s[s.size() - 1] == '_');
            cout << ans << '\n';
        }
    }
    return 0;
}