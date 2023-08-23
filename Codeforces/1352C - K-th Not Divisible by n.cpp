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
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        cout << k + (k - 1) / (n - 1) << '\n';
    }
    return 0;
}