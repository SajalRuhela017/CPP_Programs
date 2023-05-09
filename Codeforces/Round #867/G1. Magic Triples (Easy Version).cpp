/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int MAX = 1e6;
int mp[MAX + 1];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            ans += (mp[v[i]] - 1) * (mp[v[i]] - 2);
            for(int j = 2; v[i] * j * j <= 1e6; j++)
                ans += mp[v[i] * j] * mp[v[i] * j * j];
        }
        cout << ans << '\n';
        for(int i = 0; i < n; i++)
            mp[v[i]]--;
    }
    return 0;
}