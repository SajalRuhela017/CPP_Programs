/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int binExpo(int a, int b)
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

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, even = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            even += (v[i] % 2 == 0);
        }
        if(even == n)
            cout << binExpo(2, even) - 1 << '\n';
        else
            cout << binExpo(2, even) << '\n';
    }
    return 0;
}