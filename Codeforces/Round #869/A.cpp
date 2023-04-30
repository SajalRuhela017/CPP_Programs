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
        int n, k, ans = 0;
        cin >> n >> k;
        vector<string> s(n);
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            ans += (s[0] == s[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}