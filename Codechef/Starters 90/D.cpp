/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int fact[100001];

void factorial(int n = 100000)
{
    fact[0] = 1;
    for(int i = 1; i <= n; ++i)
        fact[i] = (i * fact[i - 1]) % mod;
}

int calPower(int x)
{
    int Mod = mod - 2;
    int a = 2, ans = 1;
    while(x)
    {
        if(x & 1)
            ans = (ans * a) % Mod;
        a =  (a * a) % Mod;
        x >>= 1;
    }
    return ans;
}

int modulo_inverse(int n)
{
    int res = calPower(n);
    return res;
}

int nCr(int n, int r)
{
    if(r > n)
        return 0;
    else if(r == 0)
        return 1;
    return (fact[n] * modulo_inverse(fact[r]) % mod * modulo_inverse(fact[n - r]) % mod) % mod;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    factorial();
    while(tt--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int check = 1;
        for(int i = 0; i < n; i++)
        {
            if(v[i] <= (i + 1))
            {
                int val1 = calPower(n - i - 1);
                int val2 = nCr(i, i + 1 - v[i]);
                ans = (ans + (val1 * val2) % mod) % mod;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}