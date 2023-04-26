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
        int n;
        cin >> n;
        if(n == 1)
            cout << -1 << '\n';
        else if(n == 2)
            cout << 1 << ' ' << 1 << ' ' << 1 << '\n';
        else
        {
            int x = sqrt(n - 1);
            if(n - x * x <= 1000000)
                cout << x << ' ' << x << ' ' << n - x * x << '\n';
            else
                cout << x << ' ' << x + 1 << ' ' << n - x * (x + 1) << '\n';
        }
    }
    return 0;
}