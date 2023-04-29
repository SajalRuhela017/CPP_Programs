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
        string s;
        cin >> s;
        if(s[0] == '0')
        {
            cout << 0 << '\n';
            continue;
        }
        int ans = (s[0] == '?' ? 9 : 1);
        for(int i = 1; i < s.size(); i++)
            if(s[i] == '?')
                ans *= 10;
        cout << ans << '\n';
    }
    return 0;
}