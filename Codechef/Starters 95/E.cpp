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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> cars(n), outlet(m);
        for(int i = 0; i < n; i++)
            cin >> cars[i];
        for(int i = 0; i < m; i++)
            cin >> outlet[i];
        sort(cars.rbegin(), cars.rend());
        sort(outlet.rbegin(), outlet.rend());
        int ans = 0, i = 0, j = 0;
        while(i < n && j < m)
        {
            ans += min(cars[i], h * outlet[j]);
            i++, j++;
        }
        cout << ans << '\n';
    }
    return 0;
}