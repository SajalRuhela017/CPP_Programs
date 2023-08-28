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
    int n, target, mn = INT_MAX;
    cin >> n >> target;
    vector<int> v(n), ans(2);
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
        if(target != 1 && target > mn)
        {
            if(mp[v[i]])
            {
                if(mp[target - v[i]] && mp[target - v[i]] != i + 1)
                    ans = {i + 1 , mp[target - v[i]]};        
            }
            mp[v[i]] = i + 1;
            if(mp[target - v[i]] && mp[target - v[i]] != mp[v[i]])
                ans = {mp[v[i]], mp[target - v[i]]};
        }
    }
    if(!ans[0] || target == 1 || target <= mn)
    {
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }
    sort(ans.begin(), ans.end());
    cout << ans[0] << ' ' << ans[1] << '\n';
    
    return 0;
}