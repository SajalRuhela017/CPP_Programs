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
    int m, n;
    cin >> m >> n;
    vector<int> v(n), a;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 1, j = 0; i <= m; i++)
    {
        if(i != v[j])
            a.push_back(i);
        else
            j++;
    }
    int ans = 0, sum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if(sum <= m)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}