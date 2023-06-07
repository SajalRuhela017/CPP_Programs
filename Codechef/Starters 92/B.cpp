/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int binPower(int a, int b)
{
    a %= mod;
    int ans = 1;
    while(b)
    {
        if(b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int fact(int x)
{
    x %= mod;
    int ans = 1;
    for(int i = 2; i <= x; i++)
        ans = ans * i % mod;
    return ans;
}

int solve(int k, int n)
{
    int ans = 1;
    for(int i = k; i > k - n; i--)
        ans = ans * i % mod;
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
        if(n < k)
        {
            cout << solve(k, n) << '\n';
        }
        else
        {
            cout << fact(k) << '\n';
        }
    }
    return 0;
}