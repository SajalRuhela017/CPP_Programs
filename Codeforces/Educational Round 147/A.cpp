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
        int ans = 0;
        if(s[0] == '0')
        {
            cout << 0 << '\n';
            continue;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '?')
            {
                ans = 1;
                break;
            }
        }
        if(s[0] == '?')
            ans *= 9;
        else if(s[0] > '0')
            ans = 1;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == '?')
                ans *= 10;
        }
        cout << ans << '\n';
    }
    return 0;
}