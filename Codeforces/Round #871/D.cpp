/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool solve(int a, int b)
{
    if(a == b)
        return 1;
    if(a <= 2)
        return 0;
    if(a % 3)
        return 0;
    return solve(a / 3, b) || solve(2 * a / 3, b);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, m;
        cin >> n >> m;
        if(m > n)
        {
            cout << "NO" << '\n';
        }
        else if(n == m)
        {
            cout << "YES" << '\n';
        }
        else
        {
            bool flag = solve(n, m);
            cout << (flag ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}