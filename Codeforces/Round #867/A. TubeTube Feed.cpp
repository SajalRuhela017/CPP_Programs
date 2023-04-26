/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, t, mx = 0, ans = -1;
        cin >> n >> t;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        vector<pair<int, int>> can_view;
        for(int i = 0; i < n; i++)
        {
            if(a[i] + i <= t && b[i] > mx)
            {
                ans = i + 1;
                mx = max(mx, b[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}