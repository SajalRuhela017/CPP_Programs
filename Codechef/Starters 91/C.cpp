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
        int n, k;
        cin >> n >> k;
        int odds = (n + 1) / 2;
        if((odds - k - 1) & 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}