/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int fact(int n)
{
    int ans = 1;
    for(int i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        k = min(30LL, k);
        cout << min((1 << k) - 1LL, n) + 1 << '\n';
    }
    return 0;
}