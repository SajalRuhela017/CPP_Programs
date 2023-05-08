/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int lcm(int a, int b)
{
    int g = __gcd(a, b);
    return a * b / g;
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
        vector<int> v(n + 1, 1), ans(n + 1);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(n == 1)
        {
            cout << "YES" << '\n';
            continue;
        }
        ans[n] = 1;
        ans[0] = v[0];
        for(int i = 1; i <= n; i++)
        {
            ans[i] = lcm(v[i], v[i - 1]);
        }
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(__gcd(ans[i], ans[i + 1]) != v[i])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}