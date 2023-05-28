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
        int n, q, res = 0;
        cin >> n >> q;
        vector<int> v(n), pref(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            pref[l]++;
            if(r < n)
                pref[r]--;
        }
        for(int i = 1; i < n; i++)
            pref[i] += pref[i - 1];
        vector<int> ans(n);
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; i++)
        {
            vp[i].first = pref[i];
            vp[i].second = i;
        }
        sort(vp.begin(), vp.end());
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++)
        {
            ans[vp[i].second] = v[i];
            res += vp[i].first * v[i];
        }
        cout << res << '\n';
        for(auto i: ans)
            cout << i << ' ';
        cout << '\n';

    }
    return 0;
}