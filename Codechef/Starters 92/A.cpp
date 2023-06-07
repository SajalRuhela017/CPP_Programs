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
        int n, k, l, total = 0;
        cin >> n >> k >> l;
        vector<int> m(n), v(n), temp;
        for(int i = 0; i < n; i++)
        {
            cin >> m[i] >> v[i];
            if(v[i] == l)
            {
                temp.push_back(m[i]);
                total += m[i];
            }
        }
        if(temp.size() < k)
        {
            cout << -1 << '\n';
            continue;
        }
        sort(temp.rbegin(), temp.rend());
        int ans = 0, i = 0;
        while(k--)
            ans += temp[i++];
        cout << ans << '\n';
    }
    return 0;
}