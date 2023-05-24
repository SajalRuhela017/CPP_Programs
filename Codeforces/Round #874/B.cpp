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
        vector<int> b(n);
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        }
        for(int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}