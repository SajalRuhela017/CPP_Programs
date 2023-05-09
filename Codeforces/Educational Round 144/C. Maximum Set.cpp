/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0, size = 0, fac1 = 1;
        while(l * fac1 <= r)
        {
            fac1 *= 2;
            size++;
        }
        fac1 /= 2;
        int fac2 = fac1 * 3;
        fac2 /= 2;
        ans += max(r / fac1 - l + 1, 0LL);
        ans += max(r / fac2 - l + 1, 0LL) * (size - 1);
        cout << size << ' ' << ans << '\n';

    }
    return 0;
}