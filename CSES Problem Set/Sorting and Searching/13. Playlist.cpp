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
    int n, ans = 0, mx = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0, j = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        while(mp[v[i]] > 1)
            mp[v[j++]]--;
        ans = max(ans, i - j + 1);
    }
    cout << ans << '\n';
    return 0;
}