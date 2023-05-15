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
        int n, ans = 1;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for(int i = 0; i < n; i++)
        {
            int x = n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            ans = ans * max(x - i, 0LL) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}