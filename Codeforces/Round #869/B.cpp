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
        {
            cout << 1 << '\n';
        }
        else if(n & 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            for(int i = 1; i <= n; i += 2)
                cout << i + 1 << ' ' << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}