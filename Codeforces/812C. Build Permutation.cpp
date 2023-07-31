/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

const int N = 1e5 + 5;

int ans[N];

void solve(int n)
{
    if(n < 0)
        return;
    int r = sqrt(2 * n);
    r *= r;
    int l = r - n;
    solve(l - 1);
    for(; l <= n; l++, n--)
        ans[l] = n, ans[n] = l;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        solve(n - 1);
        for(int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}