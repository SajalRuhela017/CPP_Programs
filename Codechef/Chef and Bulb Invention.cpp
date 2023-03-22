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
        int n, p, k;
        cin >> n >> p >> k;
        if(n >= k)
        {
            int r = (n - 1) % k + 1, x = (n - 1) / k + 1, y = p % k;
            if(y <= r)
                cout << y * x + (p / k) + 1 << "\n";
            else
                cout << r * x + (y - r) * (x - 1) + (p / k) + 1 << "\n";
        }
        else
            cout << (p % k) + 1 << "\n";
    }
    return 0;
}