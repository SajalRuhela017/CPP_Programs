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
        int a, b, c;
        cin >> a >> b >> c;
        double mid = (a + b) / 2.0;
        cout << ceil((float)(abs(b - mid)) / c) << '\n';
    }
    return 0;
}