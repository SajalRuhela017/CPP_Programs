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
    int n, ans = 1, x;
    cin >> n;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x] = i;
    }
    for(int i = 2; i <= n; i++)
    {
        if(mp[i] < mp[i - 1])
            ans++;
    }
    cout << ans << '\n';
    return 0;
}