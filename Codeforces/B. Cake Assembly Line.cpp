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
        int n, w, h, mx = INT_MAX, mn = INT_MIN, x;
        cin >> n >> w >> h;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            mn = max(mn, x + h - a[i] - w);
            mx = min(mx, x - h - a[i] + w);
        }
        cout << (mx >= mn ? "YES" : "NO") << '\n';
    }
    return 0;
}