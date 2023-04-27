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
        int n, ans = 0, last = 0;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
            s.insert(v[i] + 1);
            mp[v[i]]++;
        }
        for(auto i: s)
        {
            ans += max(0LL, mp[i] - last);
            last = mp[i];
        }
        cout << ans << '\n';
    }
    return 0;
}