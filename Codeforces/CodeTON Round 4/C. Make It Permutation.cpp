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
        int n, c, d, ans = 0, rm = 0;
        cin >> n >> c >> d;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        ans = c * n + d;
        for (int i = 0; i < n; i++) 
        {
            if (i > 0 && v[i] == v[i - 1])
                rm += 1;
            int cur = c * (n - 1 - i + rm) + d * (v[i] - (i + 1 - rm));
            ans = min(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}