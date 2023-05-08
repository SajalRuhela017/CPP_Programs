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
        int n, m, mn = INT_MAX, smn = INT_MAX, mx = INT_MIN, smx = INT_MIN, x = 0, ans = 0;
        cin >> n >> m;
        x = min(m, n);
        vector<int> v(n * m);
        for(int i = 0; i < n * m; i++)
        {
            cin >> v[i];
            if(v[i] >= smx)
            {
                if(v[i] >= mx)
                    smx = mx, mx = v[i];
                else
                    smx = v[i];
            }
            if(v[i] <= smn)
            {
                if(v[i] <= mn)
                    smn = mn, mn = v[i];
                else
                    smn = v[i];
            }
        }

        for(int i = 1; i <= n * m - x; i++)
            ans += (mx - mn);

        for(int i = 1; i < x; i++)
            ans += max(smx - mn, mx - smn);

        cout << ans << '\n';
    }
    return 0;
}