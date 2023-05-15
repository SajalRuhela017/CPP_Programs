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
        int n, ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ans = __gcd(ans, abs(x - i));
        }
        cout << ans << '\n';
    }
    return 0;
}