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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int len = v[n / 2], ans = 0;
    for(int i = 0; i < n; i++)
        ans += abs(len - v[i]);
    cout << ans << '\n';
    return 0;
}