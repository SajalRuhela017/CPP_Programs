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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        ans = a + b;
        for(int i = 1; i <= 100000; i++)
        {
            int temp = (a + i - 1) / i + (b + i - 1) / i + (i - 1);
            ans = min(ans, temp);
        }
        cout << ans << '\n';
    }
    return 0;
}