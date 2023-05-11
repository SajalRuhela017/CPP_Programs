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
        int n, m, d, ans = INT_MAX;
        cin >> n >> m >> d;
        vector<int> p(n), a(m);
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> p[i];
            mp[p[i]] = i;
        }
        for(int i = 0; i < m; i++)
            cin >> a[i];
        for(int i = 0; i < m - 1; i++)
        {
            if(mp[a[i + 1]] <= mp[a[i]] || mp[a[i + 1]] - mp[a[i]] > d)
            {
                ans = 0;
                break;
            }
            ans = min(ans, mp[a[i + 1]] - mp[a[i]]);
            int gap = mp[a[i + 1]] - mp[a[i]];
            int swapRequired = d - gap + 1;
            int swapPossible = mp[a[i]] - 1 + n - mp[a[i + 1]];
            if(swapPossible >= swapRequired)
                ans = min(ans, swapRequired);
        }
        cout << ans << '\n';        
    }
    return 0;
}