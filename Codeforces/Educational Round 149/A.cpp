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
        int x, k;
        cin >> x >> k;
        if(x % k)
            cout << 1 << '\n' << x << '\n';
        else
            cout << 2 << '\n' << x - 1 << ' ' << 1 << '\n';
    }
    return 0;
}